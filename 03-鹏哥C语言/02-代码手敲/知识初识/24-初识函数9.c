//2022��6��24��18:20:08

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Add(int* p) {
	(*p)++;
}
int main()
{
	//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
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
