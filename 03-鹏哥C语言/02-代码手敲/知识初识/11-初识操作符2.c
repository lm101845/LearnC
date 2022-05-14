//2022年5月14日22:21:33

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a = 10;
	int b = ++a;  //前置++  先++,后使用
	printf("%d\n", a);  //11
	printf("%d\n", b);  //11

	int m = 10;
	int n = m++; //后置++  先使用,后++
	printf("%d\n", m);  //11
	printf("%d\n", n);  //10

	//(类型)    强制类型转换
	int c = (int)3.14;
	printf("%d\n", c);

	system("pause");
	return EXIT_SUCCESS;
}
