//2022��5��17��12:14:03

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* C������α�ʾ��٣�
* ����0��ʾ�٣���0��ʾ��
*/
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
	else
		printf("haha\n");
	return 0;

	//ʲô������ӡ
	//else��if����ͺ�ifƥ���𣿲��ǵģ�else����������if����ƥ�䣡��
	//����������ǣ��������д���ǳ���Ҫ������

	//  �����������
	//	int a = 0;
	//	int b = 2;
	//	if (a == 1)
	//	{
	//		if (b == 2)
	//		{
	//			printf("hehe\n");
	//		}
	//		else
	//		{
	//			printf("haha\n");
	//		}
	//	}
	//	return 0;
	system("pause");
	return EXIT_SUCCESS;
}
