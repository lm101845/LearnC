/*************************************************************************************
 * �� �� ��:   09-�ڴ����ע������.c
 * �� �� �ߣ�  liming
 * ����ʱ�䣺  2022/04/16 12:06
*************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1.��Ҫ���ؾֲ������ĵ�ַ
int* func()
{
	int num = 10;  //�������ջ�϶���ģ������Ž������ͷ��ˣ�����
	return &num;
}
void test01()
{
	int* p = func();
	printf("*p=%d\n", *p);   //10
	printf("*p=%d\n", *p);  //��2�ν���Ͳ�һ����
	//�ܽ᣺�������Ҫ����Ϊ�ڴ��Ѿ����ͷ��ˣ�ʹ������ڴ����ڷǷ�����
}

//2.���Է��ؾ�̬�����ĵ�ַ

int* func2()
{
	static int num = 20;
	return &num;
}
void test02()
{
	int* p = func2();
	printf("*p=%d\n", *p);   //20
	printf("*p=%d\n", *p);  //20
}
int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
