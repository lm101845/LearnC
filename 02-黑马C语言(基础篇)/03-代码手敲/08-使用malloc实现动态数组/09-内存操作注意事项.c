/*************************************************************************************
 * 文 件 名:   09-内存操作注意事项.c
 * 创 建 者：  liming
 * 创建时间：  2022/04/16 12:06
*************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1.不要返回局部变量的地址
int* func()
{
	int num = 10;  //这个是在栈上定义的，大括号结束就释放了！！！
	return &num;
}
void test01()
{
	int* p = func();
	printf("*p=%d\n", *p);   //10
	printf("*p=%d\n", *p);  //第2次结果就不一样了
	//总结：结果不重要，因为内存已经被释放了，使用这块内存属于非法操作
}

//2.可以返回静态变量的地址

int* func2()
{
	static int num = 20;
	return &num;
}
void test02()
{
	int* p = func2();
	printf("*p=%d\n", *p);   //20
	printf("*p=%d\n", *p);  //20
}
int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
