//2022年6月4日11:30:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//写代码将三个整数数按从大到小输出。
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//输入
	scanf("%d%d%d", &a, &b, &c);
	//调整顺序
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	//	//输出 - 大到小
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return EXIT_SUCCESS;
}