/*************************************************************************************
 * 文 件 名:   野指针3.c
 * 创 建 者：  liming
 * 创建时间：  2021/11/20 17:22
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
	

	int* p =  test();
	*p = 20;
	system("pause");
	return EXIT_SUCCESS;
	
}
