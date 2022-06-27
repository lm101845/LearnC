//2022年7月16日17:40:56

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//创建
	//int arr[3][4];
	//char ch[3][10];
	//初始化 - 创建的同时给赋值
	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	//int arr[3][4] = { 1,2,3,4,5,6,7};//不完全初始化 - 后面补0
	//int arr[3][4] = { {1,2}, {3,4} ,{4,5} };
	
	//二维数组的行可以省略，但是列不能省略(列决定了一行有几个元素)
	//一行的长度必须要确定，我才能知道第二行元素放在哪个位置
	//int arr[][4] = { {1,2}, {3,4} ,{4,5} };
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{		
	//		printf("%d ", arr[i][j]);  //第i行，第j列
	//	}
	//	printf("\n");
	//}

	//二维数组在数组中存储
	int arr[][4] = { {1,2}, {3,4} ,{4,5} };
	int i = 0;
	int j = 0;
	int* p = &arr[0][0];

	for (i = 0; i < 12; i++)
	{
		printf("%d ", *p);
		p++;
	}

	
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
	//	}
	//}
	system("pause");
	return EXIT_SUCCESS;
}
