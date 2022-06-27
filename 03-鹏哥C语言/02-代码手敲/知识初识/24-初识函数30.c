//2022Äê7ÔÂ1ÈÕ15:21:18

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int DigitSum(int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}
int main()
{
	int num = 1729;
	int sum = DigitSum(num);
	printf("%d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}
