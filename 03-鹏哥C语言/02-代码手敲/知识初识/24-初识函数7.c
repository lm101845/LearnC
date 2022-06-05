//2022年6月5日19:30:43

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//is_leap_year
//如果判断是闰年返回1
//不是闰年，返回0

//
//一个函数如果不写返回类型，默认返回int类型，返回类型最好要写上 
//

int is_leap_year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		return 1;
	else
		return 0;
}
// 
//err
//int is_leap_year(int n)
//{
//	if (n % 4 == 0)
//	{
//		if (n % 100 != 0)
//			return 1;
//		else
//			return 0;
//	}
//	else if (n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}

//int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//

int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}

	system("pause");
	return EXIT_SUCCESS;
}
