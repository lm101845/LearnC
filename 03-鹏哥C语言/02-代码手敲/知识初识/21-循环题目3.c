//2022��6��3��22:22:22

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//��Ŀ����һ�������������в��Ҿ����ĳ������n
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Ҫ���ҵ�����
	//��arr�������������в���k��7����ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);   //�����Ԫ�ظ���
	int left = 0;
	int right = sz - 1;

	// ���ֲ���Ҫ�ܶ��
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
			printf("�ҵ����±�Ϊ:%d\n", mid);
			break;
			//�ҵ��˼ǵ�һ��Ҫ����ѭ��������
		}
	}

	if (left > right)
	{
		printf("�Ҳ���");
	}
	system("pause");
	return EXIT_SUCCESS;
}
