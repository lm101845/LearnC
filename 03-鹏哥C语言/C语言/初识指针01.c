/*************************************************************************************
 * 文 件 名:   初识指针01.c
 * 创 建 者：  liming
 * 创建时间：  2021/11/20 16:02
*************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf_s("%p\n", pa);
	printf_s("%p\n", pa + 1);
	printf_s("%p\n", pc);
	printf_s("%p\n", pc + 1);
	//格式控制符“%p”中的p是pointer（指针）的缩写。指针的值是语言实现（编译程序）相关的，
	//但几乎所有实现中，指针的值都是一个表示地址空间中某个存储器单元的整数。printf函数族中对于%p一般以十六进制整数方式输出指针的值，附加前缀0x

	//指针类型决定了指针+1向后跳几个字节
	//整型指针+1要跳4个字节，字符型指针+1要跳1个字节

	//指针类型决定了：指针走一步，走多远，也就是指针的步长

	system("pause");
	return EXIT_SUCCESS;
}
