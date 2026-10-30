#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <sys/stat.h>

#include "Vfifo_ssa.h" //仿真模型的头文件，由top.v生成，如果顶层文件名更改则也需要更改
#include <verilated.h>

VerilatedContext *contextp = new VerilatedContext;
Vfifo_ssa *fifo_ssa = new Vfifo_ssa{contextp};

#include "verilated_vcd_c.h"            //波形文件所需的头文件
VerilatedVcdC *tfp = new VerilatedVcdC; // 创建一个波形文件指针

static const int HEIGHT = 4;
static const int WIDTH = 4;
static const int DATA_W = 32;

void tick(){
    fifo_ssa->clk = 0;
    fifo_ssa->eval();
    contextp->timeInc(50);
    tfp->dump(contextp->time());

    fifo_ssa->clk = 1;
    fifo_ssa->eval();
    contextp->timeInc(50);
    tfp->dump(contextp->time());
}

int main(int argc,char ** argv){
    contextp->commandArgs(argc,argv);
    contextp->traceEverOn(true);
    fifo_ssa->trace(tfp, 99);                  // 采样深度为99
    tfp->open("build/wave/fifo_ssa_wave.vcd"); // 打开波形文件，文件地址和文件名可以自定义

    /***/
    printf("fifo_ssa仿真过程\n");
    fifo_ssa->rst_n=0;
    for(int j=0;j<WIDTH;j++){
        fifo_ssa->down_ready[j]=1;
    }
    for(int i=0;i<HEIGHT;i++){
        fifo_ssa->right_ready[i]=1;
    }
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            fifo_ssa->preload_data[i][j] = 0;
            fifo_ssa->preload_vld[i][j]  = 0;
        }
    }
    for (int i = 0; i < HEIGHT; i++) {
        fifo_ssa->fifo_wr_en[i]   = 0;
        fifo_ssa->fifo_wr_data[i] = 0;
        fifo_ssa->fifo_wr_row[i]  = 0;
    }
    tick();
    tick();
    fifo_ssa->rst_n=1;

    /** preload **/
    uint32_t weight_vec[HEIGHT][WIDTH] = {
        {2,0,0,2},
        {0,4,4,0},
        {0,6,6,0},
        {8,0,0,8}
    };
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            fifo_ssa->preload_data[i][j] = weight_vec[i][j];
            fifo_ssa->preload_vld[i][j]  = 1;
        }
    }
    tick();
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            fifo_ssa->preload_vld[i][j] = 0;
        }
    }
    tick();
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("PE[%d][%d].hold_data = %d  ",
                   i, j,
                   (int)fifo_ssa->hold_data[i][j]);
        }
        printf("\n");
    }
    tick();
    for(int j=0;j<WIDTH;j++){
        fifo_ssa->up_vld[j]=1;
    }

    /** left input **/
    const int NUM_ROWS=3;
    uint32_t data_stream[NUM_ROWS][HEIGHT]={
        {1,2,3,4},
        {5,6,7,8},
        {1,2,3,4}
    };
    int wr_ptr[HEIGHT]={0};
    while(1){
        bool all_done = true;
        for (int i = 0; i < HEIGHT; i++)
            if (wr_ptr[i] < NUM_ROWS) { all_done = false; break; }
        if (all_done) break;
        for (int i = 0; i < HEIGHT; i++) {
            if (wr_ptr[i] < NUM_ROWS && !fifo_ssa->fifo_full[i]) {
                fifo_ssa->fifo_wr_en[i]   = 1;
                fifo_ssa->fifo_wr_data[i] = data_stream[wr_ptr[i]][i];
                fifo_ssa->fifo_wr_row[i]  = wr_ptr[i];
                wr_ptr[i]++;
            } else {
                fifo_ssa->fifo_wr_en[i] = 0;
            }
        }
        tick();
        for (int j = 0; j < WIDTH; j++) {
            printf("col %d:down_sum=%d,down_row=%d,down_vld=%d  ",j,fifo_ssa->down_psum[j],fifo_ssa->down_row[j],fifo_ssa->down_vld[j]);
        }
        printf("\n");
    }
    for (int i = 0; i < HEIGHT; i++) fifo_ssa->fifo_wr_en[i] = 0;
    for (int cycle = 0; cycle < 16; cycle++) {
        tick();
        for (int j = 0; j < WIDTH; j++) {
            printf("col %d:down_sum=%d,down_row=%d,down_vld=%d  ",j,fifo_ssa->down_psum[j],fifo_ssa->down_row[j],fifo_ssa->down_vld[j]);
        }
        printf("\n");
    }
    /***/
    
    tfp->close(); // 关闭波形文件
    delete tfp;
    fifo_ssa->final();
    delete fifo_ssa;
    fifo_ssa=nullptr;
    delete contextp;
    contextp=nullptr;

    return 0;
}