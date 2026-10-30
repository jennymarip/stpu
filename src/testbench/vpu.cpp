#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <sys/stat.h>

#include "Vvpu.h" //仿真模型的头文件，由top.v生成，如果顶层文件名更改则也需要更改
#include <verilated.h>

VerilatedContext *contextp = new VerilatedContext;
Vvpu *vpu = new Vvpu{contextp};

#include "verilated_vcd_c.h"            //波形文件所需的头文件
VerilatedVcdC *tfp = new VerilatedVcdC; // 创建一个波形文件指针

static const int HEIGHT = 4;
static const int DATA_W = 32;
void tick(){
    vpu->clk = 0;
    vpu->eval();
    contextp->timeInc(50);
    tfp->dump(contextp->time());

    vpu->clk = 1;
    vpu->eval();
    contextp->timeInc(50);
    tfp->dump(contextp->time());
}
int main(int argc,char ** argv){
    contextp->commandArgs(argc,argv);
    contextp->traceEverOn(true);
    vpu->trace(tfp, 99);                  // 采样深度为99
    tfp->open("build/wave/vpu_wave.vcd"); // 打开波形文件，文件地址和文件名可以自定义

    /***/
    printf("vpu仿真过程\n");
    /** preload **/
    printf("preload\n");
    vpu->rst_n        = 0;
    vpu->up_psum      = 0;
    vpu->up_vld       = 0;
    vpu->up_row       = 0;
    vpu->down_ready   = 1;
    for (int i = 0; i < HEIGHT; i++) {
        vpu->left_data[i]    = 0;
        vpu->left_vld[i]     = 0;
        vpu->left_row[i]     = 0;
        vpu->right_ready[i]  = 1;
        vpu->preload_data[i] = 0;
        vpu->preload_vld[i]  = 0;
    }
    tick();
    tick();
    vpu->rst_n = 1;
    tick();
    uint32_t preload_vec[HEIGHT] = {2,0,0,4};
    for (int i = 0; i < HEIGHT; i++) {
        vpu->preload_data[i] = preload_vec[i];
        vpu->preload_vld[i]  = 1;
    }
    tick();
    for (int i = 0; i < HEIGHT; i++) {
        vpu->preload_vld[i] = 0;
    }
    tick();   // 再走一拍，让 PE 稳定
    for (int i = 0; i < HEIGHT; i++) {
        printf("PE[%d].hold_data = %d\n", i, (int)vpu->hold_data[i]);
    }
    /** left input **/
    printf("input\n");
    uint32_t input_vec[HEIGHT] = {2,4,6,8};
    for(int i=0;i<HEIGHT;i++){
        vpu->left_data[i]=input_vec[i];
        vpu->left_row[i]=0;
        vpu->left_vld[i]=1;
    }
    vpu->up_vld=1;
    /***/
    for (int cycle = 0; cycle < 8; cycle++) {
        tick();
        printf("cycle %d: down_psum = %d, down_vld = %d, down_row = %d\n",
               cycle,
               (int)vpu->down_psum,
               (int)vpu->down_vld,
               (int)vpu->down_row);
        for (int i = 0; i < HEIGHT; i++) {
            printf("    PE[%d]: right_data=%d right_vld=%d right_row=%d\n",
                   i,
                   (int)vpu->right_data[i],
                   (int)vpu->right_vld[i],
                   (int)vpu->right_row[i]);
        }
    }
    tfp->close(); // 关闭波形文件
    delete tfp;
    vpu->final();
    delete vpu;
    vpu=nullptr;
    delete contextp;
    contextp=nullptr;

    return 0;
}