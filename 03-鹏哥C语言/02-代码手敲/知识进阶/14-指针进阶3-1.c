//2023��2��9��16:00:17

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void print(int* ptr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(ptr + i));
//	}
//}
//
//void test(char* p)
//{
//	
//}

//һ��ָ�봫��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//p��һ��ָ��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p,sz);
//	//������һ��ָ�봫��
//	char ch = 'w';
//	test(&ch);  //char*
//	char* p1 = &ch;
//	test(p1);
//	system("pause");
//	return EXIT_SUCCESS;
//}

//����ָ�봫��
//void test1(int** p2)
//{
//	**p2 = 20;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;	   //pa��һ��ָ��
//	int** ppa = &pa;  //ppa�Ƕ���ָ��
//	test1(ppa);   //����ָ�봫��,��һ��ָ������ĵ�ַ
//	printf("%d\n", a);
//
//	int* arr[10] = { 0 };  
//	//���������Ԫ�ش洢����ָ�����,����һ��ָ������
//	test1(arr);  
//	//arr��������Ԫ�صĵ�ַ����Ԫ��Ҳ��һ��ָ�룬ָ��ĵ�ַ���Ǿ��Ƕ���ָ��
//	//�������д��Ҳ��û������
//	printf("%d\n", *arr[0]);
//	printf("%d\n", *arr[1]);
//	printf("%d\n", *arr[9]);
//	system("pause");
//	return EXIT_SUCCESS;
//}


//����ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = {0};
//	int (*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ
//
//	//����ָ�� - ��ź�����ַ��ָ��
//	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
//
//	//pf����һ������ָ�����
//	int (*pf)(int, int) = &Add;
//
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//������ !== &������(���ȼ�)
//	//������ === &������(�ȼ�)
//	system("pause");
//	return EXIT_SUCCESS;
//}


//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	void (*pt)(char*) = &test;
//
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf����һ������ָ�����
//	//int (*pf)(int, int) = &Add;
//
//	int (*pf)(int, int) = Add;//Add === pf
//	//int ret = (*pf)(3, 5);//1
//	//int ret = pf(3, 5);//2
//	//int ret = Add(3, 5);//3
//	// 
//	//int ret = * pf(3, 5);//err
//
//	//printf("%d\n", ret);
//
//	return 0;
//}