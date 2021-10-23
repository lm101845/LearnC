/*************************************************************************************
 * 文 件 名:   关键字和标识符的命名规则.c
 * 创 建 者：  liming
 * 创建时间：  2021/10/23 15:58
*************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//关键字
//在	C语言中预先保留的单词
void test01()
{
	//int int = 10;
	//int void = 10;
	//int return = 10;
	//int extern = 10;
}

//标识符命名规则(创建变量名时的规范)
//1.标识符不可以是关键字
//2.标识符只能由字母、数字、下划线组成
//2.第一个字符必须是字母或者下划线
//4.标识符的字母是区分大小写的
void test02()
{
	int a = 10;
	//int extern = 10;
	int abc123 = 10;
	//int 123abc = 10;
	int a_b1 = 10;
	int _ab123 = 10;
	//int 123_abc = 10;
	printf("a=%d\n", a);
	//printf("a=%d\n", A);  //ERROR 字母是区分大小写的

	//建议：起名的时候最好做到见名知义的效果
	int a1 = 10;
	int b1 = 20;
	int c1 = a1 + b1;
	//这种起名字就不好，没有见名知义

	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	printf("sum = %d\n", sum);
}
int main()
{
	test01(); 
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
