//2023年2月4日09:49:06

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//1.字符指针一般用法
	//char ch = 'q';
	//char * pc = &ch;

	//2.字符指针还可以指向一个字符串
	char* ps = "hello bit";
	//这个写法是把这个字符串首字符h的地址存入指针
	//(全部存入不可能，[hello bit]一共10个字节[]，但指针大小是4/8个字节，存不下)
	//这里的ps是指针变量,也是字符串数组首元素的地址
	char arr[] = "hello bit";
	//而这种写法是把hello bit整个内容都放在字符串中去了
	//这里的arr是数组,arr也表示字符串数组首元素的地址
	printf("%c\n", *ps); //h
	//%c(char)是以字符形式输出，只输出一个字符
	printf("%s\n", ps);  //hello bit
	printf("%s\n", arr); //hello bit
	//%s(string)格式符，用来输出一个字符串。
	//%s打印数组只需要知道数组首元素的地址即可
	system("pause");
	return EXIT_SUCCESS;
}
