/*************************************************************************************
 * �� �� ��:   ָ��Ƭ��2.c
 * �� �� �ߣ�  liming
 * ����ʱ�䣺  2021/12/12 15:37
*************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int a[10] = { 0 };
	//printf("%d\n", a[0]);  //0
	//printf("%d\n", a[1]);  //0
	//printf("%d\n", a[9]);  //0

	int i = 0;
	int* p = a;
	//p�����ŵ���a�������Ԫ�ص�ַ
	//�������ʹ������������׵�ַ
	for (i = 0; i <= 12; i++)
	 //����Խ����ʵ��µ�Ұָ������
	{
	/*	*p = i;
		p++;*/
		*p++ = i;
		//�ȼ����������2��
 	}

	int* q = test();
	printf_s("%d\n", *q);   //10
	//printf_s("%d\n", a[9]);
	system("pause");
	return EXIT_SUCCESS;
}
