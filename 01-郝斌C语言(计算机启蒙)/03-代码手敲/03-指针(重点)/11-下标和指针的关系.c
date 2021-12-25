/**
	2021年12月25日 merry christmas 
*/
// 一维数组名是个指针常量，它存放的是一维数组第一个元素的地址。
/**
	int 			%d
	long int 		%ld
	char 			%c
	float 			%f
	double			%lf
	16进制			%#X
*/
#include <stdio.h>

int main(void)
{
	int a[5];    //a是数组名，5是数组元素的个数 元素就是变量a[0]——a[4] 
	int b[5];
	//a = b;   //error a是常量，不管它是不是地址，你不能把一个值赋给一个常量 
	printf("%#X\n",&a[0]);  //数组名a的值应该和&a[0]是一样的
	printf("%#X\n",a);
	return 0; 
} 
