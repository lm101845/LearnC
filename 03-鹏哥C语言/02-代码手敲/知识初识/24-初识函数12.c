//2022年6月24日18:55:53

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//函数的定义——放在前面，就不需要再声明了
//因为定义本身就是一种强有力的声明
//int Add(int x, int y)
//{
//	return x + y;
//}


int main()
{
	int a = 10;
	int b = 20;
	//函数声明一下
	int Add(int, int);    
	//这样提前声明一下，即使Add函数在main函数下面定义的，也不会有警告了
	int c = Add(a, b);
	printf("%d\n", c);
	system("pause");
	return EXIT_SUCCESS;
}

//函数的定义——放在后面，需要在前面先声明一下
int Add(int x, int y)
{
	return x + y;
}
