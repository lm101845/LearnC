//2022��7��16��17:40:56

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//����
	//int arr[3][4];
	//char ch[3][10];
	//��ʼ�� - ������ͬʱ����ֵ
	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	//int arr[3][4] = { 1,2,3,4,5,6,7};//����ȫ��ʼ�� - ���油0
	//int arr[3][4] = { {1,2}, {3,4} ,{4,5} };
	
	//��ά������п���ʡ�ԣ������в���ʡ��(�о�����һ���м���Ԫ��)
	//һ�еĳ��ȱ���Ҫȷ�����Ҳ���֪���ڶ���Ԫ�ط����ĸ�λ��
	//int arr[][4] = { {1,2}, {3,4} ,{4,5} };
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{		
	//		printf("%d ", arr[i][j]);  //��i�У���j��
	//	}
	//	printf("\n");
	//}

	//��ά�����������д洢
	int arr[][4] = { {1,2}, {3,4} ,{4,5} };
	int i = 0;
	int j = 0;
	int* p = &arr[0][0];

	for (i = 0; i < 12; i++)
	{
		printf("%d ", *p);
		p++;
	}

	
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
	//	}
	//}
	system("pause");
	return EXIT_SUCCESS;
}
