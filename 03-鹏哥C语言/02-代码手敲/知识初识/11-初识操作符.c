//2022��5��14��21:54:49

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a = 2;
	int b = a << 1;
	printf("%d\n", b);  //4
	//���Ʋ������ƶ����Ƕ�����λ������һλ

	int c = 0;
	//0��ʾ�٣���0������
	printf("%d\n", !c);

	//sizeof��һ���������������������ͻ������С(���ֽ�Ϊ��λ)
	printf("%d\n", sizeof(int));
	int d = 10;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a);  //sizeof�����С���ſ���ʡ��(�����Ǻ������ǲ�����)

	int arr[10] = { 10 };
	printf("%d\n", sizeof(arr));  //40 �����������ܴ�С����λ���ֽ�
	int sz = sizeof(arr) / sizeof(arr[0]);   //������ĸ���  10
	printf("%d\n", sz);

	//~:��һ�����Ķ����ư�λȡ��(�����ж�����λ������ȫ��ȡ��,��������λ )
	//%d��ӡ��������ԭ�룬���ڴ��д�ķ�ʽ�ǲ���
	int e = 1;
	printf("e����ֵΪ%d\n", ~e);

	int f = 10;
	printf("f����ֵΪ%d\n", ~f);

	int g = 0;
	printf("g����ֵΪ%d\n", ~g);
	
	system("pause");
	return EXIT_SUCCESS;
}
