/*************************************************************************************
 * 文 件 名:   07-内存操作函数.c
 * 创 建 者：  liming
 * 创建时间：  2022/04/10 19:15
*************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//memset:内存设置
void test01()
{
	char buf[32] = "hello world";
	printf("buf=%s\n", buf);
	memset(buf, 'a', 32);
	printf("buf=%s\n", buf);
	//memset主要用途是给内存清空
	memset(buf, 0, 32);
	printf("buf=%s\n", buf);

}

//memcpy:内存拷贝
void printArray(char* arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%c", arr[i]);
	}
	printf("###\n");
}
void test02()
{
	char dst[64] = { 0 };
	char src[64] = "hello\0world";
	strcpy(dst, src);  //遇到\0就结束了
	//printf("dst=%s\n", dst);
	printArray(dst, sizeof(dst));

	memset(dst, 0, sizeof(dst));  //清空操作
	memcpy(dst, src, sizeof(dst));
	printArray(dst, sizeof(dst));

	//用途：给数组进行赋值
	int arr[5] = { 1,2,3,4,5 };
	int arr2[5];
	//arr2 = arr;   //这样是不可以的
	memcpy(arr2, arr, sizeof(arr));
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}

}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
