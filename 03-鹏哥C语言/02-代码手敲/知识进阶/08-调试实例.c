//2023年1月27日10:54:16

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 11; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	//代码运行的结果是什么？
	system("pause");
	return EXIT_SUCCESS;
}
