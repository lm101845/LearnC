//2022��6��4��12:22:48

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//��ӡ1000�굽2000��֮������ꡪ����Ҫ��ӡ��Ԫ1�굽��Ԫ5000�������
	//�ж�y�ǲ�������
	//1. ��4���������ܱ�100����������
	//2. �ܱ�400����������
	int y = 0;
	for (y = 1; y < 5000; y++)
	{
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		{
			printf("%d\n��������", y);
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}
