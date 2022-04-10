/*************************************************************************************
 * �� �� ��:   07-�ڴ��������.c
 * �� �� �ߣ�  liming
 * ����ʱ�䣺  2022/04/10 19:15
*************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//memset:�ڴ�����
void test01()
{
	char buf[32] = "hello world";
	printf("buf=%s\n", buf);
	memset(buf, 'a', 32);
	printf("buf=%s\n", buf);
	//memset��Ҫ��;�Ǹ��ڴ����
	memset(buf, 0, 32);
	printf("buf=%s\n", buf);

}

//memcpy:�ڴ濽��
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
	strcpy(dst, src);  //����\0�ͽ�����
	//printf("dst=%s\n", dst);
	printArray(dst, sizeof(dst));

	memset(dst, 0, sizeof(dst));  //��ղ���
	memcpy(dst, src, sizeof(dst));
	printArray(dst, sizeof(dst));

	//��;����������и�ֵ
	int arr[5] = { 1,2,3,4,5 };
	int arr2[5];
	//arr2 = arr;   //�����ǲ����Ե�
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
