//2023��2��21��13:46:23

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int find_num(int arr[3][3], int r, int c, int k)
int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;		 //��
	//int y = c - 1;  //��
	 int y = *py - 1;
	//�����Ͻ�(�����½�)��ʼ��
	 //while (x < r && y >= 0)
	 while (x < *px && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;//�ҵ���
		}
	}
	return 0;
}

int main()
{
	//int (*  (*F)(int, int))(int);
	//int(*  (*F)(int, int) );

	//���Ͼ���
	//��Ŀ���ݣ�
	//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
	//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
	//Ҫ��ʱ�临�Ӷ�С��O(N);

	//1 2 3
	//2 3 4
	//4 5 6


	//1 2 3 
	//4 5 6
	//7 8 9

	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//����һ�����֣�����7
	//����ҵ�����1�� �Ҳ�������0
	//����1��ʱ�临�Ӷ�̫��
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; i < 3; j++)
	//	{
	//		if (arr[i][j] == 7)
	//		{
	//			printf("%s", "�ҵ���");
	//		}
	//	}
	//}

	//����2��
	int k = 7;
	int x = 3; 
	int y = 3;
	//&x,&y 
	//1. �������
	//2. ����ֵ
	//����ҵ�����1�� �Ҳ�������0
	//int ret = find_num(arr, 3, 3, k);
	int ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±��ǣ�%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	system("pause");
	return EXIT_SUCCESS;
}
