//2023年2月13日11:50:48

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 定义简单的结构 */
struct
{
	unsigned int widthValidated;
	unsigned int heightValidated;
} status1;

/* 定义位域结构 */
struct
{
	unsigned int widthValidated : 1;
	unsigned int heightValidated : 1;
} status2;

int main()
{
	printf("Memory size occupied by status1 : %d\n", sizeof(status1));
	printf("Memory size occupied by status2 : %d\n", sizeof(status2));
	//unsigned int默认4个字节
	system("pause");
	return EXIT_SUCCESS;
}
