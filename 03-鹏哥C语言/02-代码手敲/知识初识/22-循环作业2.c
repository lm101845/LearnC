//2022年6月4日11:18:29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int func(int a)
{
	int b;
	switch (a)
	{
	case 1: b = 30;
	case 2:b = 20;
	case 3: b = 16;
	default: b = 0;
	} 
	return b;
}
int main()
{
	printf("b的值为%d\n", func(1));
	system("pause");
	return EXIT_SUCCESS;
}
