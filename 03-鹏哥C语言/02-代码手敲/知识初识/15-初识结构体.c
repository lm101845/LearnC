//2022年5月16日18:34:57

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//结构体可以让C语言创建新的类型出来
//创建一个学生
struct Stu
{
	char name[20];
	int age;
	double score;
};

//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = {"张三",20,85.5};   //结构体的创建和初始化
	printf("%s %d %lf\n", s.name, s.age, s.score);   //点操作符：结构体变量.成员变量
	struct Stu* ps = &s;
	//s是结构体类型，ps是结构体指针
	printf("第二种打印方法:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("第三种打印方法,使用过箭头:%s %d %lf\n", ps->name, ps->age, ps->score);
	system("pause");
	return EXIT_SUCCESS;
}
