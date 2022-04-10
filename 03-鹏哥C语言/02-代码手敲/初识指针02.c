/*************************************************************************************
 * 文 件 名:   初识指针02.c
 * 创 建 者：  liming
 * 创建时间：  2021/11/20 16:22
*************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int arr[10] = { 0 };
	int* p = arr;   //arr是数组名，首元素的地址

	//char* p = arr;   //这样写就不对了

	//现在我想把数组里面的内容全部都改成1
	for (int i = 0; i < 10; i++)
	{	
		*(p + i) = 1;
	}

	system("pause");
	return EXIT_SUCCESS;
}
