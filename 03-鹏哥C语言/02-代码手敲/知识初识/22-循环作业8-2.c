//2022��6��4��13:03:37

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//�ж�������һ�ַ���
	int count = 0;
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
		int j = 0;
		int flag = 1;//����i��������
		for (j = 2; j < i; j++)
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
