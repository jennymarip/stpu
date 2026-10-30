#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <sys/stat.h>

#include "Vpe.h"
#include <verilated.h>


VerilatedContext *contextp = new VerilatedContext;
Vpe *pe = new Vpe{contextp};

#include "verilated_vcd_c.h"            //波形文件所需的头文件
VerilatedVcdC *tfp = new VerilatedVcdC; // 创建一个波形文件指针

void tick(){
    pe->clk = 0;
    pe->eval();
    contextp->timeInc(50);
    tfp->dump(contextp->time());

    pe->clk = 1;
    pe->eval();
    contextp->timeInc(50);
    tfp->dump(contextp->time());
}
int main(int argc,char ** argv){
    contextp->commandArgs(argc,argv);

    //wave
    contextp->traceEverOn(true);          // 启用跟踪
    pe->trace(tfp, 99);                  // 采样深度为99
    tfp->open("build/wave/pe_wave.vcd"); // 打开波形文件，文件地址和文件名可以自定义

    /***/
    printf("仿真过程..\n");
    pe->rst_n = 0;
    tick();
    pe->rst_n = 1;
    tick();
    pe->preload_data=2;
    pe->preload_vld=1;
    pe->down_ready=1;
    pe->right_ready=1;
    tick();
    pe->up_psum=5;
    pe->up_vld=1;
    pe->up_row=0;
    tick();

    pe->left_data=4;
    pe->left_vld=1;
    pe->left_row=0;


    tick();
    tick();
    tick();
    tick();
    tick();
    /***/

    tfp->close(); // 关闭波形文件
    delete tfp;
    pe->final();
    delete pe;
    pe=nullptr;
    delete contextp;
    contextp=nullptr;

    return 0;
}