//2022��4��16��
/*
	�����ķ��ࣺ
		�ֲ�����-{}�ڲ������
		ȫ�ֱ���

		���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
		�����飺��ȫ�ֱ����;ֲ�����������д��һ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int age = 29;
int main()
{
	//int age = 20;
	//printf("%d\n", age);

	int a = 0;
	int b = 0;
	int sum = 0;
	//scanf_s("%d %d", &a, &b);
	scanf("%d %d", &a, &b);
	//VS��Ϊscanf����ȫ������ʹ��scanf_s�����滻(���������VS�����ṩ�ģ�����C���Ա�׼�����)
	//�����ڵ�һ���������Ͳ��ᱨ���������
	//����scanf_s���ֻ����VS�����������ã�Ϊ�˿�ƽ̨�����Ի�����scanf��һ��
	sum = a + b;
	printf("%d\n", sum);
	return 0;
}

