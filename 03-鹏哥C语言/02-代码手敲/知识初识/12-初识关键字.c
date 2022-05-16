//2022年5月16日14:23:17
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	int a = 10;  //自动创建，自动销毁的——自动变量
	//前面的auto省略了，完整的应该是auto int a = 10;
	//auto 新的C语言语法中也有其他用法——暂时不考虑

	//extern：用来声明外部符号

	register int num = 100;   //建议num的值存放在寄存器里面
	//至于最终是否放在寄存器里面，不是你说了算，而是寄存器说了算的，你只能建议

	//signed     有符号的
	//unsigned   无符号的
	//union      联合体(共用体)
	//void	     无,空
	//volatile   防编译器优化，C语言暂时不讲
	//define include都不是关键字！！！他们叫预处理指令
	system("pause");
	return EXIT_SUCCESS;
}
