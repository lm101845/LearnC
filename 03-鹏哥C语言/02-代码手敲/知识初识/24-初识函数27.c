//2022Äê7ÔÂ1ÈÕ11:59:23

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Fun(int n)
{
    if (n == 5)
        return 2;
    else
        return 2 * Fun(n + 1);
}

int main()
{
    printf("%d\n", Fun(2));
	system("pause");
	return EXIT_SUCCESS;
}
