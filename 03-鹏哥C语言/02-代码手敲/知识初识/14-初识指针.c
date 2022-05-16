//2022年5月16日15:49:29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a = 10;   //a在内存中药分配空间的——4个字节
	//&a拿到的只是是4个字节(int型有4个字节)的第一个字节的地址
	printf("%p\n", &a);
	//%p是专门用来打印地址的
	//每次打印的地址都是不一样的，因为是局部变量，打印完就销毁了
	int * pa = &a;
	//pa是用来存放地址的，在C语言中pa叫指针变量
	//*说明pa是指针变量
	//int说明pa指向的变量类型是int类型

	char ch = 'w';
	char* pc = &pc;

	int b = 100;
	int* pb = &b;
	*pb = 200; 
	//*叫解引用操作 *pb就是通过pb里面的地址，找到b
	printf("b=%d\n", b);
	//我们想改b的值，可以不通过b来改，你只要把b的地址告诉我，我通过你的地址也能改掉你
	//这属于间接的改变

	printf("char*指针的大小为%d\n", sizeof(char*));  //4
	printf("short*指针的大小为%d\n", sizeof(short*));  //4
	printf("int*指针的大小为%d\n", sizeof(int*));  //4
	printf("long*指针的大小为%d\n", sizeof(long*));  //4
	printf("long long*指针的大小为%d\n", sizeof(long long*));  //4
	printf("float*指针的大小为%d\n", sizeof(float*));  //4
	printf("double*指针的大小为%d\n", sizeof(double*));  //4
	//不同类型的指针的大小是相同的(x86是4个字节，x64是8个字节)
	//为什么？指针是用来存放地址的，指针需要多大空间，取决于地址的存储需要多大空间

	system("pause");
	return EXIT_SUCCESS;
}
