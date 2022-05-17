//2022年5月17日12:14:03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* C语言如何表示真假？
* ——0表示假，非0表示真
*/
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
	else
		printf("haha\n");
	return 0;

	//什么都不打印
	//else和if对齐就和if匹配吗？不是的，else和离的最近的if进行匹配！！
	//这个告诉我们：代码的书写风格非常重要！！！

	//  可以这样理解
	//	int a = 0;
	//	int b = 2;
	//	if (a == 1)
	//	{
	//		if (b == 2)
	//		{
	//			printf("hehe\n");
	//		}
	//		else
	//		{
	//			printf("haha\n");
	//		}
	//	}
	//	return 0;
	system("pause");
	return EXIT_SUCCESS;
}
