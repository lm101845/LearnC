//2023年2月20日10:38:52

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);  //&a取的是整个数组的地址，+1，跳整个数组
//    int* ptr2 = (int*)((int)a + 1);  //把地址强制转换为整型，整型+1就是+1
//
//    printf("%x,%x", ptr1[-1], *ptr2);
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//这是一个逗号表达式！！并不是说把0,1放进去
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//	system("pause");
//	return EXIT_SUCCESS;
//}


//int main()
//{
//	int a[5][5];
//    int(*p)[4];
//    p = a;		//int (*)[5]
//    printf("%p\n,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	system("pause");
//	return EXIT_SUCCESS;
//}


int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr1 = (int*)(&aa + 1);  //&aa取的是整个数组的地址，+1.跳过整个数组
    int* ptr2 = (int*)(*(aa + 1)); //aa表示二维数组第一行的地址，+1，指向第2行
    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	system("pause");
	return EXIT_SUCCESS;
}

//int main()
//{
//	system("pause");
//	return EXIT_SUCCESS;
//}