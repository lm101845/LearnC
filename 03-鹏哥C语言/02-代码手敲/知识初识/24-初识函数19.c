//2022��6��25��16:13:32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//���n��쳲�������(���ʺ��õݹ���)���������������
//�ݹ������⣬����Ч��̫�͡���n=50Ҫ��10���ӣ�̫����
int count = 0;
int Fib(int n)
{
	if (n == 3)
		count++;
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

//���Ǵ�ǰ�����㣬��ѭ����
int Fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	//int ret = Fib(n);
	int ret2 = Fib2(n);
	//printf("%d\n", ret);
	printf("%d\n", ret2);
	//printf("count = %d\n", count);  //��n=40�ǣ�count = 39088169�������ظ��ļ���
	system("pause");
	return EXIT_SUCCESS;
}
