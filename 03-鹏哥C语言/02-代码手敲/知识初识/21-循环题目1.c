//2022��6��3��16:15:57
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//��Ŀ1������n�Ľ׳�
	//��ȥ�����Լ�д��Ȼд������
	// ������д�ģ�����
	//int n;
	//scanf("%d", &n);  //���������������ִ浽n����
	//printf("n��ֵΪ%d\n", n);
	//for (int i = n-1 ; i == 1; i--)
	//{
	//	n *= i;
	//}
	//printf("n�Ľ׳�Ϊ%d\n", n);

	int i = 0;
	int n = 0;
	int ret = 1;
	printf("����������Ҫ��������Ľ׳ˣ�");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
		//�ҵ���ѽ���������д��������������������
	}
	printf("����Ҫ�����%d�Ľ׳�Ϊ%d\n", n, ret);
	system("pause");
	return EXIT_SUCCESS;
}
