//2023年2月13日13:41:03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct
{
	unsigned int age : 3;
} Age;

int main()
{
	Age.age = 4;
	printf("Sizeof( Age ) : %d\n", sizeof(Age));
	printf("Age.age : %d\n", Age.age);

	Age.age = 7;
	printf("Age.age : %d\n", Age.age);

	Age.age = 8; // 二进制表示为 1000 有四位，超出
	printf("Age.age : %d\n", Age.age);
	system("pause");
	return EXIT_SUCCESS;
}
