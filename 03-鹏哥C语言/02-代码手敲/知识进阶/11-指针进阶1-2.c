//2023��2��4��10:08:52

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    //*str3 = 'w';
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    //*str3 = 'w';
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    system("pause");
//	  return EXIT_SUCCESS;
//}


//int main()
//{
//	//�������ǰ�"hello bit"����ַ��������ַ��ĵ�ַ�洢����ps��
//
//	char* ps = "hello bit";
//	char arr[] = "hello bit";
//	//*ps = 'w';	//err,�����ַ����ǲ����Ը��ĵģ��ĵĻ��ᱨ��
//
//	arr[0] = 'w';
//	printf("%c\n", *ps);//h
//	printf("%s\n", ps);
//	printf("%s\n", arr);
//	system("pause");
//	return EXIT_SUCCESS;
//}

int main()
{
	//ָ������
	//���� - �����д�ŵ���ָ�루��ַ��
	//int* arr[3];//�������ָ�������
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr[3] = {&a, &b, &c};
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d ", *(arr[i]));
	//}

	int a[5] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6 };
	int c[] = { 3,4,5,6,7 };

	int* arr[3] = {a,b,c};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d ", *(arr[i] + j));
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return EXIT_SUCCESS;
}



