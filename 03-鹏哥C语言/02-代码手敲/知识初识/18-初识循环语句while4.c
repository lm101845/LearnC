//2022��6��3��14:54:51

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			//ֻ���ӡ0-9����
			continue;

		putchar(ch);
	}
	system("pause");
	return EXIT_SUCCESS;
}

//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d ", i);
//		i++;//��������
//	}
//
//	return 0;
//}
