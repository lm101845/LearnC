//2022��6��3��14:05:54

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int ch = 0;
	//ctrl+z - getchar �Ͷ�ȡ����

	//getchar
	//int test = getchar();
	//printf("%c\n", test);
	//EOF - end of file - �ļ�������־
	while ((ch = getchar()) != EOF)
		//getchar��ȡһ���ַ��ŵ�ch����ȥ
		//��getchar��ȡ�ַ�ʧ������£��᷵��EOF
		//getchar�ǻ�ȡ�ַ��ģ����ǲ������\n�����س���
	{
		putchar(ch);
		//puchar���������ַ���ӡ
	}

	system("pause");
	return EXIT_SUCCESS;
}
