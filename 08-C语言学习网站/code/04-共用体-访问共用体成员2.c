//2023��2��1��14:59:44

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union Data
{
	int i;
	float f;
	char  str[20];
};

int main()
{
	union Data data;

	data.i = 10;
	printf("data.i : %d\n", data.i);

	data.f = 220.5;
	printf("data.f : %f\n", data.f);

	strcpy(data.str, "C Programming");
	printf("data.str : %s\n", data.str);
	//��������еĳ�Ա��������������Ϊͬһʱ��ֻ�õ�һ����Ա��
	system("pause");
	return EXIT_SUCCESS;
}
