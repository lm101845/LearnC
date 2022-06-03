//2022年6月3日16:08:17

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* do-while 语句是一种后测试循环语句，即循环体中的代码执行后才会对退出条件进行求值。换句
话说，循环体内的代码至少执行一次

后测试循环经常用于这种情形：循环体内代码在退出前至少要执行一次。
*/
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
		{
			//i++;
			continue;
			//break;
		}
		printf("%d ", i);
		i++;
	} while (i <= 10);
	system("pause");
	return EXIT_SUCCESS;
}
