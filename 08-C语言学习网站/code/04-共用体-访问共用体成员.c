//2023��2��1��14:56:04

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
	data.f = 220.5;
	strcpy(data.str, "C Programming");

	printf("data.i : %d\n", data.i);
	printf("data.f : %f\n", data.f);
	printf("data.str : %s\n", data.str);
	//��������ǿ��Կ���������� i �� f ��Ա��ֵ���𻵣�
	//��Ϊ��󸳸�������ֵռ�����ڴ�λ�ã���Ҳ�� str ��Ա�ܹ���������ԭ������������������һ����ͬ��ʵ�������������ͬһʱ��ֻʹ��һ����������Ҳ��ʾ��ʹ�ù��������ҪĿ�ģ�
	system("pause");
	return EXIT_SUCCESS;
}
