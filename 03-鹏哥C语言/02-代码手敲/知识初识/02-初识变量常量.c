//2022年4月16日
/*
	变量的分类：
		局部变量-{}内部定义的
		全局变量

		当局部变量和全局变量名字冲突的情况下，局部优先
		不建议：把全局变量和局部变量的名字写成一样的
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int age = 29;
int main()
{
	//int age = 20;
	//printf("%d\n", age);

	int a = 0;
	int b = 0;
	int sum = 0;
	//scanf_s("%d %d", &a, &b);
	scanf("%d %d", &a, &b);
	//VS认为scanf不安全，建议使用scanf_s进行替换(这个函数是VS编译提供的，不是C语言标准定义的)
	//或者在第一行添加命令，就不会报这个警告了
	//但是scanf_s这个只能在VS编译器里面用，为了跨平台，所以还是用scanf好一点
	sum = a + b;
	printf("%d\n", sum);
	return 0;
}

