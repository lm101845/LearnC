//2023��2��10��14:58:12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//����ָ������ - ��ź���ָ�������

//����ָ�� int*
//����ָ������ int* arr[5];

//ע���������൱�ں���������
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int main()
{
	int (*pf1)(int,int) = Add;
	//�����pf1����ָ������ָ��
	int (*pf2)(int, int) = Sub;
	//Add��Sub�������ͺͲ���һģһ�������԰����Ƿ���һ����������
	int (*pfArr[2])(int, int) = { Add, Sub };    //pfArr���Ǻ���ָ������
	system("pause");
	return EXIT_SUCCESS;
}
