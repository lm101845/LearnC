//2022��12��10��19:47:33

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test1(int arr[])
//����ȼ���int* arr,��һ��ָ������Ĵ�С
//32λƽ̨����4,64λƽ̨����8
{
	printf("%d\n", sizeof(arr));
}

void test2(char ch[])
//char* ch,ָ�������������ŵ�ַ�ģ����Ĵ�СҲ��ָ������Ĵ�С��Ҳ��4/8���ֽڴ�С
//��Ϊһ��ָ���ռ4/8���ֽڡ���ָ���С�������ͣ�������������
{
	printf("%d\n", sizeof(ch));
}

int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test1(arr);
	test2(ch);
	//���鴫�Σ�������ʵ����Ԫ�صĵ�ַ����Ԫ�ص�ַ���Ͷ�󣬴�ӡ�����Ͷ��
	system("pause");
	return EXIT_SUCCESS;
}
