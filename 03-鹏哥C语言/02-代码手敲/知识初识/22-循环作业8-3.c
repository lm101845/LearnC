//2022��6��4��13:10:12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int count = 0;
	int i = 0;

	//m = a*b
	//a��b��һ��������һ�������� <= ��ƽ��m��
	//16 = 2*8 = 4*4

	//sqrt - �ǿ�ƽ���ĺ��� - math.h
	//+=2,�����е�ż��������ȥ�ˣ������Ż�
	for (i = 101; i <= 200; i += 2)
	{
		//�ж�i�Ƿ�Ϊ����
		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
		int j = 0;
		int flag = 1;//����i��������
		//д�ɿ�ƽ��i�Ϳ������ж�һЩ��
		//�����ж�101�Ƿ�����������ǰ��2-100�жϣ�������2-��ƽ��(101)���ж�
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;//��������
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);//����
		}
	}
	printf("\ncount = %d\n", count);
	system("pause");
	return EXIT_SUCCESS;
}
