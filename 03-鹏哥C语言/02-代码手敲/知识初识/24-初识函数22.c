//2022年6月27日22:04:53

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main()
{
	//我自己写的代码,sum应该是浮点型的！！
	//int sum = 0.0;
	//int i = 0;
	//for (i = 1; i <= 100; i++) {
	//	sum = sum - (-1) ^ i * 1 / i;
	//}
	//printf("%d\n", sum);


	//老师代码1
	//int i = 0;
	//double sum = 0.0;

	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 2 == 0)
	//		sum -= 1.0 / i;
	//	else
	//		sum += 1.0 / i;
	//}
	//printf("%lf\n", sum);

	//老师代码2
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}
