//2022��6��5��18:12:01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a = 10;   //4���ֽڵĿռ�
	int* pa = &a;  //pa����һ��ָ�����
	*pa = 20;		//*pa����a��ֵ��Ҳ����10������������¸�ֵ
	//���ǿ���ͨ��pa����a�������ҵ�a����
	printf("%d\n", a);
	system("pause");
	return EXIT_SUCCESS;
}
