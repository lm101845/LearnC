//2022��7��1��11:44:52

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

print_table(int n)
{
	int i = 0;
	//��
	for (i = 1; i <= n; i++)
	{
		//��ӡһ��
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);  //9
	//����
	print_table(n);
	//�����������Ƿǳ��ؼ��ģ���ü���֪��
	system("pause");
	return EXIT_SUCCESS;
}
