//2022��6��27��22:33:05

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//����Ļ�����9*9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
			//%-2d��ʾ������2λ�����������
		}
		printf("\n");
	}
	system("pause");
	return EXIT_SUCCESS;
}
