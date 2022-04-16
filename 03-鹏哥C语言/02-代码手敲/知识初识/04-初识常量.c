//2022年4月16日
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
	C语言中的常量分为以下以下几种：
	字面常量
	const 修饰的常变量
	#define 定义的标识符常量
	枚举常量
*/


int main()
{
	//int n = 10;
	//const int n = 10;
	//int arr[n] = {0};//n是变量的，加了const变成常变量，也是变量，不是常量，所以这里是不行

	enum Sex
	{
		//这种枚举类型的变量的未来可能取值
		//MALE,
		MALE = 3,    //赋初值，不算改变它的值，仍然是(枚举)常量
		FEMALE,
		SECRET
	};
	//枚举常量演示
	enum Sex s = MALE;
	printf("%d\n", s);
	printf("%d\n", MALE);		//0
	printf("%d\n", FEMALE);		//1
	printf("%d\n", SECRET);		//2
	//注：枚举常量的默认是从0开始，依次向下递增1的
	system("pause");
	return EXIT_SUCCESS;
}