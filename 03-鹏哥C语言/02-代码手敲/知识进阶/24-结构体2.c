//2023年2月24日10:55:03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//结构体的不完全声明(没写结构体标签(tag)名字)
//这种写法叫匿名结构体类型
//s是变量
//注：匿名结构体类型创建完之后，就只能用一次，它是一次性的！！！！！
struct
{
	char c;
	int i;
	char ch;
	double d;
}s;

//这种写法叫匿名结构体指针类型
struct
{
	char c;
	int i;
	char ch;
	double d;
} *ps;

int main()
{
	ps = &s;  
	//他们的格式一样，不会出现太多的问题，
	//但是站在编译器角度，这2种匿名结构体类型会被当成完全不同的类型的，会有警告
	system("pause");
	return EXIT_SUCCESS;
}
