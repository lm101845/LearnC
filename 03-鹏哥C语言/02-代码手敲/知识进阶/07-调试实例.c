//2023��1��27��10:24:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//��1! + 2! + ... + n!
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	int j = 0;
	for (j = 1; j <= n; j++)
	{
		//��3�Ľ׳�ʱ��retû�г�ʼ��
		//�����ʽ��ÿ���ڲ�ѭ����ʱ��ret���г�ʼ��
		ret = 1;
		for (i = 1; i <= j; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}
