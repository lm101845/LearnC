//2022��4��16��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
	C�����еĳ�����Ϊ�������¼��֣�
	���泣��
	const ���εĳ�����
	#define ����ı�ʶ������
	ö�ٳ���
*/


int main()
{
	//int n = 10;
	//const int n = 10;
	//int arr[n] = {0};//n�Ǳ����ģ�����const��ɳ�������Ҳ�Ǳ��������ǳ��������������ǲ���

	enum Sex
	{
		//����ö�����͵ı�����δ������ȡֵ
		//MALE,
		MALE = 3,    //����ֵ������ı�����ֵ����Ȼ��(ö��)����
		FEMALE,
		SECRET
	};
	//ö�ٳ�����ʾ
	enum Sex s = MALE;
	printf("%d\n", s);
	printf("%d\n", MALE);		//0
	printf("%d\n", FEMALE);		//1
	printf("%d\n", SECRET);		//2
	//ע��ö�ٳ�����Ĭ���Ǵ�0��ʼ���������µ���1��
	system("pause");
	return EXIT_SUCCESS;
}