//2022��6��4��11:30:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//д���뽫�������������Ӵ�С�����
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//����
	scanf("%d%d%d", &a, &b, &c);
	//����˳��
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	//	//��� - ��С
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return EXIT_SUCCESS;
}