//2022年4月16日16:45:41

/*
	由双引号（Double Quote）引起来的一串字符称为字符串字面值（String Literal），
	或者简称字符串。

	注：字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的时候 \0 是结束标志，
	不算作字符串内容。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//字符数组 - 数组是一组形同类型的元素
	//字符串在结尾的位置隐藏了一个\0的字符
	//\0是字符串的结束标志
	char arr[] = "hello";
	char arr1[] = "abc";  //它里面有4个元素，包含\0
	//abc
	char arr2[] = { 'a','b','c' };  //它里面只有3个元素，没有\0   
	//abc烫烫烫烫蘟bc
	char arr3[] = { 'a','b','c','\0'};
	//abc
	
	printf("%s\n", arr);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);



	//求一下字符串的长度
	int len = strlen("abc");
	printf("%d\n", len);  //3
	//注意：字符串的结束标志\0仅仅是结束标志，
	//当我们在计算字符串长度的时候，是没有包含它的

	printf("%d\n", strlen(arr1));  //3
	printf("%d\n", strlen(arr2));  //随机值

	
	system("pause");
	return EXIT_SUCCESS;
}
