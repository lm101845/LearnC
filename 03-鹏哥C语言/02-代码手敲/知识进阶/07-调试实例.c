//2023年1月27日10:24:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//求1! + 2! + ... + n!
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	int j = 0;
	for (j = 1; j <= n; j++)
	{
		//求3的阶乘时，ret没有初始化
		//解决方式，每次内层循环的时候，ret进行初始化
		ret = 1;
		for (i = 1; i <= j; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}
