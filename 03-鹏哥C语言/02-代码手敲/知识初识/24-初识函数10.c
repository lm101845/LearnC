//2022��6��24��18:30:27

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//������Ƕ�׵��ú���ʽ����
//ÿһ��������Ӧ���ڴ����������������,�����뺯��֮����ƽ�ȵ�
//�㲻����һ�������ڲ������塿��һ������
//�����ǲ���Ƕ�׶���ģ����Ǻ�������Ƕ�׵���
void test3()
{
	printf("hehe\n");
}

int test2()
{
	test3();
	return 0;
}

int test1()
{
	test2();
}

int main()
{
	test2();
	system("pause");
	return EXIT_SUCCESS;
}
