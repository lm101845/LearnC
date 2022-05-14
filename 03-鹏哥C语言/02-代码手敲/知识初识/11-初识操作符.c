//2022年5月14日21:54:49

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a = 2;
	int b = a << 1;
	printf("%d\n", b);  //4
	//左移操作符移动的是二进制位，左移一位

	int c = 0;
	//0表示假，非0就是真
	printf("%d\n", !c);

	//sizeof是一个操作符，用来计算类型或变量大小(以字节为单位)
	printf("%d\n", sizeof(int));
	int d = 10;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a);  //sizeof后面的小括号可以省略(它不是函数，是操作符)

	int arr[10] = { 10 };
	printf("%d\n", sizeof(arr));  //40 计算的数组的总大小，单位是字节
	int sz = sizeof(arr) / sizeof(arr[0]);   //求数组的个数  10
	printf("%d\n", sz);

	//~:对一个数的二进制按位取反(把所有二进制位的数字全部取反,包括符号位 )
	//%d打印出来的是原码，而内存中存的方式是补码
	int e = 1;
	printf("e的数值为%d\n", ~e);

	int f = 10;
	printf("f的数值为%d\n", ~f);

	int g = 0;
	printf("g的数值为%d\n", ~g);
	
	system("pause");
	return EXIT_SUCCESS;
}
