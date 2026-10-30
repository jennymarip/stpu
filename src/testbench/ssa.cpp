#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <sys/stat.h>

#include "Vssa.h" //仿真模型的头文件，由top.v生成，如果顶层文件名更改则也需要更改
#include <verilated.h>

VerilatedContext *contextp = new VerilatedContext;
Vssa *ssa = new Vssa{contextp};

#include "verilated_vcd_c.h"            //波形文件所需的头文件
VerilatedVcdC *tfp = new VerilatedVcdC; // 创建一个波形文件指针

static const int HEIGHT = 4;
static const int WIDTH = 4;
static const int DATA_W = 32;

void tick(){
    ssa->clk = 0;
    ssa->eval();
    contextp->timeInc(50);
    tfp->dump(contextp->time());

    ssa->clk = 1;
    ssa->eval();
    contextp->timeInc(50);
    tfp->dump(contextp->time());
}

int main(int argc,char ** argv){
    contextp->commandArgs(argc,argv);
    contextp->traceEverOn(true);
    ssa->trace(tfp, 99);                  // 采样深度为99
    tfp->open("build/wave/ssa_wave.vcd"); // 打开波形文件，文件地址和文件名可以自定义

    /***/
    printf("ssa仿真过程\n");
    ssa->rst_n=0;
    for (int i = 0; i < HEIGHT; i++) {
        ssa->left_data[i]   = 0;
        ssa->left_vld[i]    = 0;
        ssa->left_row[i]    = 0;
        ssa->right_ready[i] = 1;
    }
    for(int j=0;j<WIDTH;j++){
        ssa->down_ready[j]=1;
    }
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            ssa->preload_data[i][j] = 0;
            ssa->preload_vld[i][j]  = 0;
        }
    }
    tick();
    tick();
    ssa->rst_n=1;

    /** preload **/
    uint32_t weight_vec[HEIGHT][WIDTH] = {
        {2,0,0,2},
        {0,4,4,0},
        {0,6,6,0},
        {8,0,0,8}
    };
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            ssa->preload_data[i][j] = weight_vec[i][j];
            ssa->preload_vld[i][j]  = 1;
        }
    }
    tick();
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            ssa->preload_vld[i][j] = 0;
        }
    }
    tick();
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("PE[%d][%d].hold_data = %d  ",
                   i, j,
                   (int)ssa->hold_data[i][j]);
        }
        printf("\n");
    }
    tick();
    for(int j=0;j<WIDTH;j++){
        ssa->up_vld[j]=1;
    }

    /** left input **/
    const int NUM_ROWS=3;
    uint32_t data_stream[NUM_ROWS][HEIGHT]={
        {1,2,3,4},
        {5,6,7,8},
        {1,2,3,4}
    };
    struct fifoentry{uint32_t data;uint32_t row;};
    std::vector<fifoentry> fifo[HEIGHT];
    for(int i=0;i<HEIGHT;i++){
        for(int r=0;r<NUM_ROWS;r++){
            fifo[i].push_back({data_stream[r][i],(uint32_t)r});
        }
    }
    int rd_ptr[HEIGHT]={0};
    while(1){
        bool all_empty=true;
        for(int i=0;i<HEIGHT;i++){
            if(rd_ptr[i]<(int)fifo[i].size()){all_empty=false;break;}
        }
        if(all_empty)break;
        for(int i=0;i<HEIGHT;i++){
            if(rd_ptr[i]<(int)fifo[i].size() && ssa->left_ready[i]){
                ssa->left_data[i]=fifo[i][rd_ptr[i]].data;
                ssa->left_row[i]=fifo[i][rd_ptr[i]].row;
                ssa->left_vld[i]=1;
                rd_ptr[i]++;
            } else ssa->left_vld[i]=0;
        }
        tick();
        for (int j = 0; j < WIDTH; j++) {
            printf("col %d:down_sum=%d,down_row=%d,down_vld=%d  ",j,ssa->down_psum[j],ssa->down_row[j],ssa->down_vld[j]);
        }
        printf("\n");
    }
    printf("1\n");
    for (int i = 0; i < HEIGHT; i++) {
        ssa->left_vld[i] = 0;
    }
    for (int cycle = 0; cycle < 16; cycle++) {
        tick();
        for (int j = 0; j < WIDTH; j++) {
            printf("col %d:down_sum=%d,down_row=%d,down_vld=%d  ",j,ssa->down_psum[j],ssa->down_row[j],ssa->down_vld[j]);
        }
        printf("\n");
    }
    /***/
    
    tfp->close(); // 关闭波形文件
    delete tfp;
    ssa->final();
    delete ssa;
    ssa=nullptr;
    delete contextp;
    contextp=nullptr;

    return 0;
}