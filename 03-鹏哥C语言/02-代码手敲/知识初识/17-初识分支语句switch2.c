//2022��6��3�� 12:32:17

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int day = 0;
	scanf("%d", &day);
	/*
		JS�е�switch
		��Ȼ switch ����Ǵ��������Խ�������ģ��� ECMAScript Ϊ��������һЩ���е����ԡ����ȣ�
switch ���������������������ͣ��ںܶ������У���ֻ��������ֵ������˿���ʹ���ַ�����������
��Σ�������ֵ����Ҫ�ǳ�����Ҳ�����Ǳ�������ʽ��
	*/
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	//Ϊ���ⲻ��Ҫ�������жϣ���ø�ÿ���������涼���� break ��䡣
	
	//default�ؼ����������κ�������û������ʱָ��Ĭ��ִ�е���䣨�൱�� else ��䣩��
	default:
		printf("�������\n");
		break;
	}

	system("pause");
	return EXIT_SUCCESS;
}
