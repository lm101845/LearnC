//2023��2��13��14:05:19

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//ð������
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	//ð�����������
	for (i = 0; i < sz-1; i++)
	{
		//һ��ð������ľ������򷽷�(2������Ԫ�رȽ�)
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		//ÿ��ð�����򶼻��ٱȽ�һ�Σ�Խ��Խ����
		{
			if (arr[j] > arr[j + 1])
			//������������
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	//����
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	bubble_sort(arr,sz);
	print_arr(arr, sz);
	system("pause");
	return EXIT_SUCCESS;
}
