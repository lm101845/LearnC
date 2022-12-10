//2022年12月10日19:47:33

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test1(int arr[])
//这个等价于int* arr,是一个指针变量的大小
//32位平台下是4,64位平台下是8
{
	printf("%d\n", sizeof(arr));
}

void test2(char ch[])
//char* ch,指针变量是用来存放地址的，它的大小也是指针变量的大小，也是4/8个字节大小
//因为一个指针就占4/8个字节——指针大小不论类型！！！！！！！
{
	printf("%d\n", sizeof(ch));
}

int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test1(arr);
	test2(ch);
	//数组传参，传的其实是首元素的地址，首元素地址类型多大，打印出来就多大
	system("pause");
	return EXIT_SUCCESS;
}
