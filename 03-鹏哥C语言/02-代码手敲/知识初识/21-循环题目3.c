//2022年6月3日22:22:22

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//题目：在一个【有序】数组中查找具体的某个数字n
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//要查找的数字
	//在arr这个有序的数组中查找k（7）的值
	int sz = sizeof(arr) / sizeof(arr[0]);   //数组的元素个数
	int left = 0;
	int right = sz - 1;

	// 二分查找要很多次
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了下标为:%d\n", mid);
			break;
			//找到了记得一定要跳出循环！！！
		}
	}

	if (left > right)
	{
		printf("找不到");
	}
	system("pause");
	return EXIT_SUCCESS;
}
