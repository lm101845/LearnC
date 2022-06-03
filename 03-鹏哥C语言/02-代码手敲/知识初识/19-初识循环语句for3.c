//2022年6月3日15:48:42

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//for循环的变种
	//int x, y;
	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) 
	//{
	//	printf("hehe\n");
	//}

	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
	//k = 0是赋值，表达式的结果为假，所以一次也不会执行
	{
		k++;
		printf("循环了");
	}
	system("pause");
	return EXIT_SUCCESS;
}
