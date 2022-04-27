//2022年4月27日22:40:34
//函数的特点就是简化代码，代码复用。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个操作数:>");
	scanf("%d %d", &num1, &num2);
	sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}
