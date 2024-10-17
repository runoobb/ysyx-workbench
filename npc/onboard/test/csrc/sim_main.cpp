//#include "Vtop.h"
//#include <verilated.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <assert.h>
//#include <memory>
//int main(int argc, char** argv)
//{
//
//	Verilated::mkdir("logs");
//	const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
//	contextp->debug(0);
//	contextp->randReset(2);
//	contextp->traceEverOn(true);
//	contextp->commandArgs(argc, argv);
//	const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};
//	top->clk = 0;
//	while(!contextp->gotFinish())
//	{
//		contextp->timeInc(1);
//		top->clk = !top->clk;
//		int a = rand() & 1;
//		int b = rand() & 1;
//		top->a = a;
//		top->b = b;
//		top->limi = 0xf;
//		top->eval();
//		printf("clk = %d, a = %d, b = %d, f = %d\n", top->clk, a, b, top->f);
//		assert(top->f == (a ^ b) || !top->clk);
//	}
//	return 0;
//}
