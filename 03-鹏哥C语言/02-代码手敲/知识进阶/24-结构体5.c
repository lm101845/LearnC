//2023年2月27日17:22:21

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//结构体内存对齐

struct S
{
	char c1;
	int i;
	char c2;
};

struct S2
{
	char c1;
	int i;
	double d;//8
};


struct S3
{
	char c1;
	char c2;
	int i;
};

struct S4
{
	double d;
	char c;
	int i;
};
struct S5
{
	char c1;
	struct S4 s4;
	double d;
};
int main()
{
	struct S s = {0};
	struct S2 s2 = { 0 };
	struct S3 s3 = { 0 };
	struct S4 s4 = { 0 };
	struct S5 s5 = { 0 };
	printf("%d\n", sizeof(s));  //12 照理说总共需要6个字节就可以了，为什么这里要12个字节呢
	printf("%d\n", sizeof(s2)); //16
	printf("%d\n", sizeof(s3)); //8
	printf("%d\n", sizeof(s4)); //16
	printf("%d\n", sizeof(s5)); //32
	system("pause");
	return EXIT_SUCCESS;
}
