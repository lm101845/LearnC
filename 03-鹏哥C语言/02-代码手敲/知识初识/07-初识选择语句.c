//2022��4��27��22:32:07


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int coding = 0;
	printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
	scanf_s("%d", &coding);
	if (coding == 1)
	{
		printf("��֣�����к�offer\n");
	}
	else
	{
		printf("�������ؼ�������\n");
	}

	system("pause");
	return EXIT_SUCCESS;
}

