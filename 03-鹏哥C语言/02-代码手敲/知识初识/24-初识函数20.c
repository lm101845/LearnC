//2022��6��27��09:59:21

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//��Ŀ1��
	//int i = 0;
	//for (i = 0; i < 10; i++) 
	//{
	//	//ѭ��10��(0-9)�������ж�(0-10)���ǻ��ѭ����һ�Σ�����Ǵ���������ѭ��)
	//}

	//��Ŀ2��
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;  //a 1  b 1
		if (b % 3 == 1)
		{
			b = b + 3;  //4  7  10  13  16  19 22 
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	system("pause");
	return EXIT_SUCCESS;
}
