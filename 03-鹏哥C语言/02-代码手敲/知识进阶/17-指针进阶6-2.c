//2023��2��13��14:35:33

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void qsort(void* base, //base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//		size_t num, //��������Ԫ�صĸ���
//		size_t size,//����������һ��Ԫ�صĴ�С����λ���ֽ�
//		int (*cmp)(const void* e1, const void* e2)//�������Ƚϴ����������е�2��Ԫ�صĺ���
//		);

//void*��ʾ�޾������͵�ָ��

/*
* �ڱ�׼C/C++���﷨�У�ֻ��int��float��char��bool�Ȼ������������ͣ�
���� size_t �� size_type �����Ժ�ı����ԱΪ�˷�������������
һЩ���������ɻ����������͵ı������͡�

size_t�Ǳ�׼C���ж���ģ�����һ���������������ص��޷���������C/C + +���ͣ�
����sizeof���������صĽ�����ͣ������͵Ĵ�С��ѡ�����С���Ա�֤�洢�ڴ���
����Ĵ�С�������Ϊ unsigned int�Ϳ����ˣ�64λϵͳ��Ϊ long unsigned int��
��ͨ����sizeof(XX)����������������õ��Ľ������size_t���͡�
*/

//qsort-�⺯�������ߡ�������ʮ��ţƤ������

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//ʹ��qsort����������������
void test01()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
	print_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int sort_by_name(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
//ʹ��qsort���нṹ������
void test02()
{
	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
	int sz = sizeof(s) / sizeof(s[0]);
	//��������������
	qsort(s, sz, sizeof(s[0]), sort_by_age);
	//��������������
	qsort(s, sz, sizeof(s[0]), sort_by_name);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
