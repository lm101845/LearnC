//2023年2月24日11:46:29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//结构体的创建和初始化

struct S
{
	char c;
	int i;
}s1, s2;

struct B
{
	double d;
	struct S s;
	char c;
};

int main()
{
	struct S s1, s2;  
	//结构体变量的定义

	struct S s3 = { 'x', 20 };
	struct B sb = { 3.14, {'w', 100},'q' };
	//结构体变量的初始化

	//  访问结构体的变量，有2种操作符：点操作符和箭头操作符
	//	. ：指针结构体变量的
	//	->：针对结构体指针的
	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);

	system("pause");
	return EXIT_SUCCESS;
}
