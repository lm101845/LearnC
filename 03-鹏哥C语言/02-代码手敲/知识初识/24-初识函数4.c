//2022年6月5日17:45:51

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//函数的定义
int get_max(int x,int y)
{
	int z = 0;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;   //返回较大值
}

int main()
{
	//写一个函数求出2个数字的较大值
	int a = 10;
	int b = 20;
	//函数的调用
	int max = get_max(a,b);
	printf("max = %d\n", max);
	system("pause");
	return EXIT_SUCCESS;
}
