/*************************************************************************************
 * 文 件 名:   避免野指针.c
 * 创 建 者：  liming
 * 创建时间：  2021/12/12 16:04
*************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a = 10;
	int* pa = &a;

	int* p = NULL;
	//当你初始化一个指针变量，并且确实不知道应该让它指向谁的时候，就给它指向NULL，指向空。
	system("pause");
	return EXIT_SUCCESS;
}
