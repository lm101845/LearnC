//2022��12��23��16:32:58

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int* p;
//	//���ָ�����pû�г�ʼ��������Ϊһ���ֲ���ָ�����
//	//�ֲ�����������ʼ���Ļ���Ĭ�������ֵ
//	//��Ὣ������ֵ������һ����ַ
//	*p = 20;
//	//�����ѡһ�����˶����20
//	//�Ƿ������ڴ�
//	//�����p�ͱ���ΪҰָ����
//	//����ʹ����δ��ʼ���ľֲ�����p
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	//2.Խ�����
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//		//ѭ��11��
//	{
//		*p = i;
//		 p++;
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}


//int * test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int * p = test();
//	*p = 20;
//	system("pause");
//	return EXIT_SUCCESS;
//}


//int main()
//{
//	//ָ���ʼ������ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//	//��ȷ֪����ʼ����ֵ
//	//int a = 10;
//	//int* ptr = &a;
//	//С��Խ�磺C���Ա����ǲ����������Խ����Ϊ��
//	//ָ��ָ��ռ��ͷż�ʱ�ÿ�(NULL)
//	system("pause");
//	return EXIT_SUCCESS;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}


//����������
int my_strlen(char * str)
{
	//\0���ַ����Ľ�����־������������\0֮ǰ�����˶����ַ�
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//ָ��-ָ��ķ�ʽ
int my_strlen2(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);
	//ָ��-ָ��õ���������ָ��֮��Ԫ�صĸ���

	//strlen�����ַ�������
	int len = strlen("abc");
	printf("%d\n", len);  //3
	//abc�ڴ��ε�ʱ�򣬴���ȥ�Ľ������ַ���abc���ַ�a�ĵ�ַ
	int len2 = my_strlen("abc");
	printf("%d\n", len2);  //3

	int len3 = my_strlen2("abc");
	printf("%d\n", len3);  //3
	system("pause");
	return EXIT_SUCCESS;
}

//int main()
//{
//	system("pause");
//	return EXIT_SUCCESS;
//}