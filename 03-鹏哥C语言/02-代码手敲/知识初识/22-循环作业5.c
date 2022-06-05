//2022年6月4日11:35:58

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//写一个代码打印1 - 100之间所有3的倍数的数字
	for (int i = 1; i < 101; i++)
	{
		//判断i是否为3的倍数
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}
