//2022��6��5��18:15:11

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Swap(int* pa, int * pb)
//paδ���������ҵ�a,pbδ���������ҵ�b
//����Swap��������ͺ�������֮���������ϵ
//���ʣ�ʲô����²���Ҫ���ݵ�ַ��ȥ������������Ҫ�ı�ֵ  
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	//дһ�������� - ����2�����ͱ�����ֵ

	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap(&a, &b);  //��ַ����
	printf("������a=%d b=%d\n", a, b);
	system("pause");
	return EXIT_SUCCESS;
}
