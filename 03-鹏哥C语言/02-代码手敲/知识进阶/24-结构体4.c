//2023��2��24��11:46:29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//�ṹ��Ĵ����ͳ�ʼ��

struct S
{
	char c;
	int i;
}s1, s2;

struct B
{
	double d;
	struct S s;
	char c;
};

int main()
{
	struct S s1, s2;  
	//�ṹ������Ķ���

	struct S s3 = { 'x', 20 };
	struct B sb = { 3.14, {'w', 100},'q' };
	//�ṹ������ĳ�ʼ��

	//  ���ʽṹ��ı�������2�ֲ���������������ͼ�ͷ������
	//	. ��ָ��ṹ�������
	//	->����Խṹ��ָ���
	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);

	system("pause");
	return EXIT_SUCCESS;
}
