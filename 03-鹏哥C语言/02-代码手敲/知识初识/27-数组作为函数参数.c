//2022年9月13日21:08:50

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubble_sort(int arr[],int sz)   //形参arr本质上是指针
{
	//计算数组元素个数——错误写法！！ 4 / 4 = 1
	//数组个数应该求好后拿进来，而不是在函数里面算！
	//int sz = sizeof(arr) / sizeof(arr[0]);
	
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//我们做的是升序，前面大于后面，我们才交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		//如果一趟过去，发现都是升序，那说明原来就是升序，就不用继续冒泡了
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//排序为升序-冒泡排序
	//计算数组元素个数——正确写法
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	//数组在传参的时候，传递的其实是数组首元素的地址
	system("pause");
	return EXIT_SUCCESS;
}
