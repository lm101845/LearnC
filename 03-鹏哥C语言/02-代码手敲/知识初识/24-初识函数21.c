//2022年6月27日21:59:49

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//9 19 29 39 49 59 69 79 89 99
//90 91 92 94 .. 99
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return EXIT_SUCCESS;
}
