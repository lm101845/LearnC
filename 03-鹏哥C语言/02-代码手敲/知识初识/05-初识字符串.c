//2022��4��16��16:45:41

/*
	��˫���ţ�Double Quote����������һ���ַ���Ϊ�ַ�������ֵ��String Literal����
	���߼���ַ�����

	ע���ַ����Ľ�����־��һ�� \0 ��ת���ַ����ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־��
	�������ַ������ݡ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//�ַ����ڽ�β��λ��������һ��\0���ַ�
	//\0���ַ����Ľ�����־
	char arr[] = "hello";
	char arr1[] = "abc";  //��������4��Ԫ�أ�����\0
	//abc
	char arr2[] = { 'a','b','c' };  //������ֻ��3��Ԫ�أ�û��\0   
	//abc���������abc
	char arr3[] = { 'a','b','c','\0'};
	//abc
	
	printf("%s\n", arr);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);



	//��һ���ַ����ĳ���
	int len = strlen("abc");
	printf("%d\n", len);  //3
	//ע�⣺�ַ����Ľ�����־\0�����ǽ�����־��
	//�������ڼ����ַ������ȵ�ʱ����û�а�������

	printf("%d\n", strlen(arr1));  //3
	printf("%d\n", strlen(arr2));  //���ֵ

	
	system("pause");
	return EXIT_SUCCESS;
}
