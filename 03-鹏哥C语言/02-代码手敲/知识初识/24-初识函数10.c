//2022年6月24日18:30:27

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//函数的嵌套调用和链式访问
//每一个函数都应该在大括号外面独立存在,函数与函数之间是平等的
//你不能在一个函数内部【定义】另一个函数
//函数是不能嵌套定义的，但是函数可以嵌套调用
void test3()
{
	printf("hehe\n");
}

int test2()
{
	test3();
	return 0;
}

int test1()
{
	test2();
}

int main()
{
	test2();
	system("pause");
	return EXIT_SUCCESS;
}
