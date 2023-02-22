//2023年2月21日13:46:23

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int find_num(int arr[3][3], int r, int c, int k)
int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;		 //行
	//int y = c - 1;  //列
	 int y = *py - 1;
	//从右上角(或左下角)开始找
	 //while (x < r && y >= 0)
	 while (x < *px && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;//找到了
		}
	}
	return 0;
}

int main()
{
	//int (*  (*F)(int, int))(int);
	//int(*  (*F)(int, int) );

	//杨氏矩阵
	//题目内容：
	//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
	//请编写程序在这样的矩阵中查找某个数字是否存在。
	//要求：时间复杂度小于O(N);

	//1 2 3
	//2 3 4
	//4 5 6


	//1 2 3 
	//4 5 6
	//7 8 9

	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//查找一个数字，比如7
	//如果找到返回1， 找不到返回0
	//方法1：时间复杂度太大
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; i < 3; j++)
	//	{
	//		if (arr[i][j] == 7)
	//		{
	//			printf("%s", "找到了");
	//		}
	//	}
	//}

	//方法2：
	int k = 7;
	int x = 3; 
	int y = 3;
	//&x,&y 
	//1. 传入参数
	//2. 带回值
	//如果找到返回1， 找不到返回0
	//int ret = find_num(arr, 3, 3, k);
	int ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是：%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	system("pause");
	return EXIT_SUCCESS;
}
