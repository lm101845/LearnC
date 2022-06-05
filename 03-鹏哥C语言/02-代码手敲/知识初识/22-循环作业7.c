//2022年6月4日12:22:48

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//打印1000年到2000年之间的闰年——我要打印公元1年到公元5000年的闰年
	//判断y是不是闰年
	//1. 被4整除，不能被100整除是闰年
	//2. 能被400整除是闰年
	int y = 0;
	for (y = 1; y < 5000; y++)
	{
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		{
			printf("%d\n年是闰年", y);
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}
