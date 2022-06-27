//2022年6月24日18:20:08

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Add(int* p) {
	(*p)++;
}
int main()
{
	//写一个函数，每调用一次这个函数，就会将 num 的值增加1。
	int num = 0;
	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	system("pause");

	return EXIT_SUCCESS;
}
