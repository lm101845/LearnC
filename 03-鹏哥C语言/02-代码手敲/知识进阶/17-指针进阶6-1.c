//2023年2月13日14:05:19

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//冒泡排序
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	//冒泡排序的趟数
	for (i = 0; i < sz-1; i++)
	{
		//一趟冒泡排序的具体排序方法(2个相邻元素比较)
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		//每趟冒泡排序都会少比较一次，越来越轻松
		{
			if (arr[j] > arr[j + 1])
			//进行升序排序
			{
				//交换
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
	//升序
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	bubble_sort(arr,sz);
	print_arr(arr, sz);
	system("pause");
	return EXIT_SUCCESS;
}
