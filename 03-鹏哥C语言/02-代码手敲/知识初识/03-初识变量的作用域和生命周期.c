//2022��4��16��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ������
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�������������������


//����������һ�±������ؼ���extern
//g_val�����������global.c�ļ����涨��ģ�����������ʹ��
//extern������import
extern int g_val;

//��������
//�������������ڣ������Ĵ���������֮���ʱ���

//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
//ȫ�ֱ������������ڣ��������������

int main()
{
	//printf("%d\n", a);   �����Ҳ���a

	{
		int a = 10;
		printf("%d\n", a);
		//aֻ��{}������Ч
	}
	//printf("%d\n", a);  �����Ҳ���a


	printf("%d\n", g_val);
	system("pause");
	return EXIT_SUCCESS;
}

