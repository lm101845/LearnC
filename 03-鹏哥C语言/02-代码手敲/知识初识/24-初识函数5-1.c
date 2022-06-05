//2022年6月5日18:12:01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a = 10;   //4个字节的空间
	int* pa = &a;  //pa就是一个指针变量
	*pa = 20;		//*pa就是a的值，也就是10，这里给它重新赋值
	//我们可以通过pa操纵a变量，找到a变量
	printf("%d\n", a);
	system("pause");
	return EXIT_SUCCESS;
}
