/*************************************************************************************
 * 文 件 名:   指针片段2.c
 * 创 建 者：  liming
 * 创建时间：  2021/12/12 15:37
*************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int a[10] = { 0 };
	//printf("%d\n", a[0]);  //0
	//printf("%d\n", a[1]);  //0
	//printf("%d\n", a[9]);  //0

	int i = 0;
	int* p = a;
	//p里面存放的是a数组的首元素地址
	//数组名就代表这个数组的首地址
	for (i = 0; i <= 12; i++)
	 //数组越界访问导致的野指针问题
	{
	/*	*p = i;
		p++;*/
		*p++ = i;
		//等价于上面的这2步
 	}

	int* q = test();
	printf_s("%d\n", *q);   //10
	//printf_s("%d\n", a[9]);
	system("pause");
	return EXIT_SUCCESS;
}
