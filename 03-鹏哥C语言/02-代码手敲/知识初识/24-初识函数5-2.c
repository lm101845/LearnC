//2022年6月5日18:15:11

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Swap(int* pa, int * pb)
//pa未来有能力找到a,pb未来有能力找到b
//这样Swap函数定义和函数调用之间就有了联系
//疑问？什么情况下参数要传递地址过去？？——参数要改变值  
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	//写一个哈函数 - 交换2个整型变量的值

	printf("交换前：a=%d b=%d\n", a, b);
	Swap(&a, &b);  //传址调用
	printf("交换后：a=%d b=%d\n", a, b);
	system("pause");
	return EXIT_SUCCESS;
}
