//2022��6��4��11:35:58

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//дһ�������ӡ1 - 100֮������3�ı���������
	for (int i = 1; i < 101; i++)
	{
		//�ж�i�Ƿ�Ϊ3�ı���
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}
