//2022��6��25��14:29:31
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;  
	scanf("%u", &num);   //1234
	//�ݹ� - �����Լ������Լ�
	print(num);   //print�������Դ�ӡ�����������ֵ�ÿһλ
	system("pause");
	return EXIT_SUCCESS;
}
