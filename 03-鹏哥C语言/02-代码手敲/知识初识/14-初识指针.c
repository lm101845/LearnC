//2022��5��16��15:49:29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a = 10;   //a���ڴ���ҩ����ռ�ġ���4���ֽ�
	//&a�õ���ֻ����4���ֽ�(int����4���ֽ�)�ĵ�һ���ֽڵĵ�ַ
	printf("%p\n", &a);
	//%p��ר��������ӡ��ַ��
	//ÿ�δ�ӡ�ĵ�ַ���ǲ�һ���ģ���Ϊ�Ǿֲ���������ӡ���������
	int * pa = &a;
	//pa��������ŵ�ַ�ģ���C������pa��ָ�����
	//*˵��pa��ָ�����
	//int˵��paָ��ı���������int����

	char ch = 'w';
	char* pc = &pc;

	int b = 100;
	int* pb = &b;
	*pb = 200; 
	//*�н����ò��� *pb����ͨ��pb����ĵ�ַ���ҵ�b
	printf("b=%d\n", b);
	//�������b��ֵ�����Բ�ͨ��b���ģ���ֻҪ��b�ĵ�ַ�����ң���ͨ����ĵ�ַҲ�ܸĵ���
	//�����ڼ�ӵĸı�

	printf("char*ָ��Ĵ�СΪ%d\n", sizeof(char*));  //4
	printf("short*ָ��Ĵ�СΪ%d\n", sizeof(short*));  //4
	printf("int*ָ��Ĵ�СΪ%d\n", sizeof(int*));  //4
	printf("long*ָ��Ĵ�СΪ%d\n", sizeof(long*));  //4
	printf("long long*ָ��Ĵ�СΪ%d\n", sizeof(long long*));  //4
	printf("float*ָ��Ĵ�СΪ%d\n", sizeof(float*));  //4
	printf("double*ָ��Ĵ�СΪ%d\n", sizeof(double*));  //4
	//��ͬ���͵�ָ��Ĵ�С����ͬ��(x86��4���ֽڣ�x64��8���ֽ�)
	//Ϊʲô��ָ����������ŵ�ַ�ģ�ָ����Ҫ���ռ䣬ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�

	system("pause");
	return EXIT_SUCCESS;
}
