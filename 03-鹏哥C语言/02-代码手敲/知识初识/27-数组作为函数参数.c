//2022��9��13��21:08:50

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubble_sort(int arr[],int sz)   //�β�arr��������ָ��
{
	//��������Ԫ�ظ�����������д������ 4 / 4 = 1
	//�������Ӧ����ú��ý������������ں��������㣡
	//int sz = sizeof(arr) / sizeof(arr[0]);
	
	//ȷ������
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		//һ��ð������Ĺ���
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//��������������ǰ����ں��棬���ǲŽ���
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		//���һ�˹�ȥ�����ֶ���������˵��ԭ���������򣬾Ͳ��ü���ð����
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//����Ϊ����-ð������
	//��������Ԫ�ظ���������ȷд��
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	//�����ڴ��ε�ʱ�򣬴��ݵ���ʵ��������Ԫ�صĵ�ַ
	system("pause");
	return EXIT_SUCCESS;
}
