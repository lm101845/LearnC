//2022年6月27日09:59:21

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//题目1：
	//int i = 0;
	//for (i = 0; i < 10; i++) 
	//{
	//	//循环10次(0-9)，但是判断(0-10)总是会比循环多一次（多的那次用于跳出循环)
	//}

	//题目2：
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;  //a 1  b 1
		if (b % 3 == 1)
		{
			b = b + 3;  //4  7  10  13  16  19 22 
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	system("pause");
	return EXIT_SUCCESS;
}
