//2022��6��3��23:03:39

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	//��Ŀ����д���룬��ʾ����ַ���2���ƶ������м���
	//welcome to bit!!!!!!
	//####################

	//w##################!
	//we################!!
	//wel##############!!!
	//...
	//welcome to bit!!!!!!

	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;
	//strlen��sizeof���ַ������ȵ�����
	//sizeof�Ὣ���ַ�\0�������ڣ���strlen���Ὣ���ַ�\0��������
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);	  //����1�����ִ���������
		system("cls");   //�����Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);
	system("pause");
	return EXIT_SUCCESS;
}
