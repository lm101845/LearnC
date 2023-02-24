//2023年2月24日10:47:33

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//一般结构体格式如下：
//struct tag
//{
//	member-list
//} varible-list;


//结构体写法1：
//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//};

//结构体写法2：
struct Book
{
	char name[20];
	int price;
	char id[12];
}b4,b5,b6;
//b4,b5,b6是创建的结构体变量
//b1.b2,b3和b4,b5,b6类型是一样的，都是我们创建出来的结构体书的变量
//不一样的地方：b1,b2,b3是局部变量，而b4,b5,b6是全局变量(不是在main函数内部创建的)

int main()
{
	int a;
	struct Book b1;
	struct Book b2;
	struct Book b3;
	//struct Book 就相当于int,其中struct不能省
	system("pause");
	return EXIT_SUCCESS;
}
