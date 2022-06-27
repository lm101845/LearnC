//2022Äê6ÔÂ25ÈÕ14:53:23

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	} 
}
int main()
{
	test(1);
	system("pause");
	return EXIT_SUCCESS;
}
