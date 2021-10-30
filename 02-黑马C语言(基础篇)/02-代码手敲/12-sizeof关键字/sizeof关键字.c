/*************************************************************************************
 * 文 件 名:   sizeof关键字.c
 * 创 建 者：  liming
 * 创建时间：  2021/10/30 19:19
*************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//sizeof可以用于统计一个变量或者一个变量或者数据类型占用的内存空间的大小
//语法： sizeof(类型/变量)
void test01() 
{
	printf("int类型的大小为%d个字节\n", sizeof(int));
	printf("short类型的大小为%d个字节\n", sizeof(short));
	printf("long类型的大小为%d个字节\n", sizeof(long));
	printf("long long类型的大小为%d个字节\n", sizeof(long long));

	int a = 10;
	printf("a占用的内存的大小为%d个字节\n", sizeof(a));

}
int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
