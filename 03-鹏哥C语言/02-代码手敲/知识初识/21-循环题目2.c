//2022��6��3��21:53:20

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//��Ŀ2������1! + 2! + ...10!
	//������д��Ҳ���԰�������������
	//int sum = 0;
	//for (int i = 1; i < 11; i++) {
	//	//�ֱ����i = 1,2,,...10�Ľ׳�
	//	for (int j = 1; j < i + 1; j++) {
	//		int ret = 1;
	//		ret *= j;
	//		sum += ret;
	//	}
	//}
	//printf("����1! + 2! + ...10!��ֵΪ%d\n", sum);


	//�ο���
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//for (n = 1; n <= 10; n++) 
	//{
	//	int ret = 1;   //����n�Ľ׳�֮ǰ����ret��ʼΪ1
	//	for (int i = 1; i <= n; i++)
	//	{
	//		ret *= i;
	//	}
	//	sum += ret;
	//}
	//printf("%d\n", sum);



	//�Ľ���
	// 3! = 3 * 2 * 1
	// 2! = 2 * 1
	//���� 3! = 2! * 3
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++) {
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}
