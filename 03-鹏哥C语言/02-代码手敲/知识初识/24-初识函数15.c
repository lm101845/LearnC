//2022年6月25日14:29:31
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;  
	scanf("%u", &num);   //1234
	//递归 - 函数自己调用自己
	print(num);   //print函数可以打印参数部分数字的每一位
	system("pause");
	return EXIT_SUCCESS;
}
