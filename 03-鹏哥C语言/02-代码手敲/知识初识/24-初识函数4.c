//2022��6��5��17:45:51

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//�����Ķ���
int get_max(int x,int y)
{
	int z = 0;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;   //���ؽϴ�ֵ
}

int main()
{
	//дһ���������2�����ֵĽϴ�ֵ
	int a = 10;
	int b = 20;
	//�����ĵ���
	int max = get_max(a,b);
	printf("max = %d\n", max);
	system("pause");
	return EXIT_SUCCESS;
}
