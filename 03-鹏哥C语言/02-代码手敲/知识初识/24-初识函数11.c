//2022��6��24��18:37:51

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//��ʽ����
int main()
{
	int len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n", strlen("abc"));

	char arr1[20] = { 0 };
	char arr2[] = "bit";
	strcpy(arr1, arr2);  //��arr2��������ݸ��Ƶ�arr1����ȥ
	printf("%s%s\n", arr1, arr2);
	printf("%s\n",strcpy(arr1,arr2));

	printf("%s\n", "=============================");
	//��һ��printf�������Ǵ�ӡ���ܣ���ӡ43�����Ƿ���ֵ���ַ�����
	//printf�������ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
	printf("%d", printf("%d", printf("%d", 43)));  //4321
	printf("%d", printf("%d", printf("%d\n", 43)));  //43 31(����һ��)

	printf("%s\n", "=============================");
	printf("%d", 43);  //43
	system("pause");
	return EXIT_SUCCESS;
}
