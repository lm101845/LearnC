//2023��2��17��18:08:24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//sizeof(������) - ��������ʾ���������-���������������Ĵ�С
//&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬���е�����������������Ԫ�صĵ�ַ
int main()
{
	int a[] = { 1,2,3,4 };//4*4=16
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4/8 a + 0 �ǵ�һ��Ԫ�صĵ�ַ��sizeof(a + 0)������ǵ�ַ�Ĵ�С
	printf("%d\n", sizeof(*a));//4  *a������ĵ�һ��Ԫ�أ�sizeof(*a)������ǵ�һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a + 1));//4/8 a + 1�ǵڶ���Ԫ�صĵ�ַ��sizeof(a+1)����ĵ�ַ�Ĵ�С
	printf("%d\n", sizeof(a[1]));//4 - ������ǵڶ���Ԫ�صĴ�С

	printf("%s\n", "=========111========");
	printf("%d\n", sizeof(&a)); //4/8 - &a��Ȼ��������ĵ�ַ������Ҳ�ǵ�ַ��sizeof(&a)�������һ����ַ�Ĵ�С
	printf("%d\n", sizeof(* &a));//16 - ���������Ĵ�С
	//&a -- int(*p)[4] = &a;
	printf("%d\n", sizeof(&a + 1));//4/8 - &a + 1 ���������Ŀռ�ĵ�ַ
	printf("%d\n", sizeof(&a[0]));//4/8
	printf("%d\n", sizeof(&a[0] + 1));//4/8

	printf("%s\n", "=========222========");

	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };
	//�������������û��б��0��
	//�����������ʾ�����ַ�������������û��'\0'��
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	printf("%s\n", "=========333========");
	 
	//strlen�����ַ������ȵ�
	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ-6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1

	printf("%s\n", "=========444========");

	char arr1[] = "abcdef";
	//[a b c d e f \0]
	printf("%d\n", sizeof(arr1));//7
	printf("%d\n", sizeof(arr1 + 0));//4/8
	printf("%d\n", sizeof(*arr1));//1
	printf("%d\n", sizeof(arr1[1]));//1
	printf("%d\n", sizeof(&arr1));//4/8  char(*)[7]
	printf("%d\n", sizeof(&arr1 + 1));//4/8 
	printf("%d\n", sizeof(&arr1[0] + 1));//4/8

	printf("%s\n", "=========555========");
	printf("%d\n", strlen(arr1));//6
	printf("%d\n", strlen(arr1 + 0));//6 
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr1));//6
	printf("%d\n", strlen(&arr1 + 1));//���ֵ
	printf("%d\n", strlen(&arr1[0] + 1));//5

	printf("%s\n", "=========666========");

	char* p = "qwerty";
	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p + 1));
	//printf("%d\n", strlen(*p));
	//printf("%d\n", strlen(p[0]));
	//printf("%d\n", strlen(&p));
	//printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1));

	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));
	system("pause");
	return EXIT_SUCCESS;
}
