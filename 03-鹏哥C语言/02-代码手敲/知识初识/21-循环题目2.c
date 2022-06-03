//2022年6月3日21:53:20

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//题目2：计算1! + 2! + ...10!
	//额，这个我写的也不对啊。。。。。。
	//int sum = 0;
	//for (int i = 1; i < 11; i++) {
	//	//分别计算i = 1,2,,...10的阶乘
	//	for (int j = 1; j < i + 1; j++) {
	//		int ret = 1;
	//		ret *= j;
	//		sum += ret;
	//	}
	//}
	//printf("计算1! + 2! + ...10!的值为%d\n", sum);


	//参考答案
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//for (n = 1; n <= 10; n++) 
	//{
	//	int ret = 1;   //计算n的阶乘之前，把ret初始为1
	//	for (int i = 1; i <= n; i++)
	//	{
	//		ret *= i;
	//	}
	//	sum += ret;
	//}
	//printf("%d\n", sum);



	//改进版
	// 3! = 3 * 2 * 1
	// 2! = 2 * 1
	//所以 3! = 2! * 3
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++) {
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}
