//2022年6月3日16:15:57
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//题目1：计算n的阶乘
	//我去，我自己写居然写不出来
	// 这是我写的，不对
	//int n;
	//scanf("%d", &n);  //将你键盘输入的数字存到n里面
	//printf("n的值为%d\n", n);
	//for (int i = n-1 ; i == 1; i--)
	//{
	//	n *= i;
	//}
	//printf("n的阶乘为%d\n", n);

	int i = 0;
	int n = 0;
	int ret = 1;
	printf("请输入你想要计算的数的阶乘：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
		//我的妈呀，我这个都写不出来啊。。。。。。
	}
	printf("你想要计算的%d的阶乘为%d\n", n, ret);
	system("pause");
	return EXIT_SUCCESS;
}
