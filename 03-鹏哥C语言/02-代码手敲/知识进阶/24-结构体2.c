//2023��2��24��10:55:03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//�ṹ��Ĳ���ȫ����(ûд�ṹ���ǩ(tag)����)
//����д���������ṹ������
//s�Ǳ���
//ע�������ṹ�����ʹ�����֮�󣬾�ֻ����һ�Σ�����һ���Եģ���������
struct
{
	char c;
	int i;
	char ch;
	double d;
}s;

//����д���������ṹ��ָ������
struct
{
	char c;
	int i;
	char ch;
	double d;
} *ps;

int main()
{
	ps = &s;  
	//���ǵĸ�ʽһ�����������̫������⣬
	//����վ�ڱ������Ƕȣ���2�������ṹ�����ͻᱻ������ȫ��ͬ�����͵ģ����о���
	system("pause");
	return EXIT_SUCCESS;
}
