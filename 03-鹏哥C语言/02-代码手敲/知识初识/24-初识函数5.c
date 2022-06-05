//2022年6月5日17:55:36

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
//写出问题了！——交换的是形参x,y的值，不是a,b的值
void Swap(int x, int y)
//这里x变成了10,y变成了20，说明实参a确实把值传给了形参x,实参b确实把值传给了形参y
//但是x的地址和a的地址不一样，y的地址和b的地址不一样
//代码里面又开辟了空间创建了z，借助z把x,y的值进行了交换，但是你是影响不了a,b的
{
	int z = 0;
	z = x;
	x = y;
	y = z;
	printf("%d%d\n", x, y);
}
int main()
{
	int a = 10;
	int b = 20;
	//当我们创建a,b两个变量的时候，他们在内存里开辟了2块空间，a和b
	//写一个函数，交换2个整型变量的值
	printf("交换前：a=%d b=%d\n", a, b);
	Swap(a, b);
	printf("交换后：a=%d b=%d\n", a, b);

	//但是直接写常量的话，是可以直接替换的
	Swap(1, 2);
	system("pause");
	return EXIT_SUCCESS;
}
