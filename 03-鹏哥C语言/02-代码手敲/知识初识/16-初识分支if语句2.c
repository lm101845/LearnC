//2022年5月17日13:16:37

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int test()
{
	if (1)
		return 0;
	return 1;
}

int main()
{
	//代码1
	int condition = 0;
	int x = 1;
	int y = 2;
	if (condition) {
		return x; 
		//这里的return执行之后，函数就结束了，后面的就不会执行了
	}
	return y;

	//代码2
	if (condition)
	{
		return x;
	}
	else
	{
		return y;
	}
	//代码1和代码2的效果是一样的,但是代码2效果更好

	test();

	int num = 5;
	//if (num = 3) //你可能少写一个等号，变成了赋值，编译器也不会报错
	if (3 == num)   
	//当变量和常量进行比较的时候，将常量放在左边，代码风格更好
	//如果你少写了一个等号，编译器会报错
		printf("hehe\n");

	system("pause");
	return EXIT_SUCCESS;
}
