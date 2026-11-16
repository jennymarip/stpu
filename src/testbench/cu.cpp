#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <sys/stat.h>

#include "Vcu.h"      // 顶层改为 cu
#include <verilated.h>

VerilatedContext *contextp = new VerilatedContext;
Vcu *cu = new Vcu{contextp};

#include "verilated_vcd_c.h"
VerilatedVcdC *tfp = new VerilatedVcdC;

static const int HEIGHT = 4;
static const int WIDTH  = 4;
static const int DATA_W = 32;

// B 按列优先：[col][row]，第 j 列即 addr=b_base+j 的内容
static uint32_t sram_mem[WIDTH][HEIGHT] = {
    {2, 0, 0, 8},   // col 0
    {0, 4, 6, 0},   // col 1
    {0, 4, 6, 0},   // col 2
    {2, 0, 0, 8},   // col 3
};

// 读响应状态：-1 表示无未完成响应，否则为当前要返回的列号
static int      rsp_j   = -1;
static uint32_t rsp_id  = 0;

static void drive_rsp() {
    if (rsp_j >= 0 && rsp_j < WIDTH) {
        cu->rd_rsp_vld = 1;
        cu->rd_rsp_id  = rsp_id;
        for (int i = 0; i < HEIGHT; i++)
            cu->rd_rsp_data[i] = sram_mem[rsp_j][i];
    } else {
        cu->rd_rsp_vld = 0;
        cu->rd_rsp_id  = 0;
        for (int i = 0; i < HEIGHT; i++)
            cu->rd_rsp_data[i] = 0;
    }
}

void tick(){
    cu->clk = 0;
    cu->eval();

    drive_rsp();
    cu->eval();

    // 在 clk=1 前采样握手，防止上升沿后内部信号清零漏采
    bool     req_hs  = cu->rd_req_vld && cu->rd_req_ready;
    bool     rsp_hs  = cu->rd_rsp_vld && cu->rd_rsp_ready;
    uint32_t req_id  = cu->rd_id;

    contextp->timeInc(50);
    tfp->dump(contextp->time());

    cu->clk = 1;
    cu->eval();
    contextp->timeInc(50);
    tfp->dump(contextp->time());

    // 上升沿后更新响应状态
    if (req_hs && rsp_j < 0) {
        rsp_j  = 0;
        rsp_id = req_id;
    } else if (rsp_hs && rsp_j >= 0) {
        rsp_j++;
        if (rsp_j >= WIDTH) rsp_j = -1;
    }
}

int main(int argc,char ** argv){
    contextp->commandArgs(argc,argv);
    contextp->traceEverOn(true);
    cu->trace(tfp, 99);
    tfp->open("build/wave/cu_wave.vcd");

    printf("cu 仿真过程\n");
    cu->rst_n = 0;

    cu->b_load_start = 0;
    cu->b_base       = 0;
    cu->b_task_id   = 0;
    cu->rd_req_ready = 1;
    cu->rd_rsp_vld   = 0;
    cu->rd_rsp_id    = 0;
    for (int i = 0; i < HEIGHT; i++) cu->rd_rsp_data[i] = 0;

    for (int j = 0; j < WIDTH; j++) {
        cu->down_ready[j] = 1;
        cu->up_vld[j]     = 0;
    }
    for (int i = 0; i < HEIGHT; i++) {
        cu->right_ready[i] = 1;
        cu->fifo_wr_en[i]  = 0;
        cu->fifo_wr_data[i]= 0;
        cu->fifo_wr_row[i] = 0;
    }

    tick();
    tick();
    cu->rst_n = 1;
    tick();

    /** preload via b_loader **/
    cu->b_base       = 0;
    cu->b_task_id   = 0;
    cu->b_load_start = 1;
    tick();
    cu->b_load_start = 0;

    int timeout = 1000;
    while (!cu->b_loaded && timeout-- > 0) tick();
    if (timeout <= 0) {
        printf("ERROR: b_loaded timeout\n");
        return 1;
    }
    printf("b_loaded, b_err=%d\n", (int)cu->b_err);

    uint32_t weight_vec[HEIGHT][WIDTH] = {
        {2,0,0,2},
        {0,4,4,0},
        {0,6,6,0},
        {8,0,0,8}
    };
    int err_cnt = 0;
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            uint32_t got = cu->hold_data[i][j];
            printf("PE[%d][%d].hold_data = %d  ", i, j, (int)got);
            if (got != weight_vec[i][j]) err_cnt++;
        }
        printf("\n");
    }
    if (err_cnt) printf("hold_data check FAIL\n");
    else         printf("hold_data check PASS\n");

    tick();

    /** left input（与原 tb 相同） **/
    for (int j = 0; j < WIDTH; j++) cu->up_vld[j] = 1;

    const int NUM_ROWS = 3;
    uint32_t data_stream[NUM_ROWS][HEIGHT] = {
        {1,2,3,4},
        {5,6,7,8},
        {1,2,3,4}
    };
    int wr_ptr[HEIGHT] = {0};
    while (1) {
        bool all_done = true;
        for (int i = 0; i < HEIGHT; i++)
            if (wr_ptr[i] < NUM_ROWS) { all_done = false; break; }
        if (all_done) break;
        for (int i = 0; i < HEIGHT; i++) {
            if (wr_ptr[i] < NUM_ROWS && !cu->fifo_full[i]) {
                cu->fifo_wr_en[i]   = 1;
                cu->fifo_wr_data[i] = data_stream[wr_ptr[i]][i];
                cu->fifo_wr_row[i]  = wr_ptr[i];
                wr_ptr[i]++;
            } else {
                cu->fifo_wr_en[i] = 0;
            }
        }
        tick();
        for (int j = 0; j < WIDTH; j++) {
            printf("col %d:down_sum=%d,down_row=%d,down_vld=%d  ",
                   j, (int)cu->down_psum[j], (int)cu->down_row[j],
                   (int)cu->down_vld[j]);
        }
        printf("\n");
    }
    for (int i = 0; i < HEIGHT; i++) cu->fifo_wr_en[i] = 0;
    for (int cycle = 0; cycle < 16; cycle++) {
        tick();
        for (int j = 0; j < WIDTH; j++) {
            printf("col %d:down_sum=%d,down_row=%d,down_vld=%d  ",
                   j, (int)cu->down_psum[j], (int)cu->down_row[j],
                   (int)cu->down_vld[j]);
        }
        printf("\n");
    }

    tfp->close();
    delete tfp;
    cu->final();
    delete cu;
    cu = nullptr;
    delete contextp;
    contextp = nullptr;

    return 0;
}