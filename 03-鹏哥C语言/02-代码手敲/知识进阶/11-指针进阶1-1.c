//2023��2��4��09:49:06

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//1.�ַ�ָ��һ���÷�
	//char ch = 'q';
	//char * pc = &ch;

	//2.�ַ�ָ�뻹����ָ��һ���ַ���
	char* ps = "hello bit";
	//���д���ǰ�����ַ������ַ�h�ĵ�ַ����ָ��
	//(ȫ�����벻���ܣ�[hello bit]һ��10���ֽ�[]����ָ���С��4/8���ֽڣ��治��)
	//�����ps��ָ�����,Ҳ���ַ���������Ԫ�صĵ�ַ
	char arr[] = "hello bit";
	//������д���ǰ�hello bit�������ݶ������ַ�����ȥ��
	//�����arr������,arrҲ��ʾ�ַ���������Ԫ�صĵ�ַ
	printf("%c\n", *ps); //h
	//%c(char)�����ַ���ʽ�����ֻ���һ���ַ�
	printf("%s\n", ps);  //hello bit
	printf("%s\n", arr); //hello bit
	//%s(string)��ʽ�����������һ���ַ�����
	//%s��ӡ����ֻ��Ҫ֪��������Ԫ�صĵ�ַ����
	system("pause");
	return EXIT_SUCCESS;
}
