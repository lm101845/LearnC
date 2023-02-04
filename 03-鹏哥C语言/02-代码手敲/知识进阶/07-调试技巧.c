//2023Äê1ÔÂ27ÈÕ10:09:29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test2()
{
	printf("hehe\n");
}

void test1()
{
	test2();
}

void test()
{
	test1();
}
int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}
