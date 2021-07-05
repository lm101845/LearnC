/*

它是从上往下编译的，但是又是从main函数进入的，如果把这个函数放上面，它就能在编译的时候确定f是个函数名字 

注意的问题：
1.函数调用和函数定义的顺序 
*/

#include <stdio.h>

void f(void)				//即使f函数没有形参，也要写成f(void) 	void f(void);函数声明,分号不能丢 
{
	printf("哈哈！\n");
}
int main(void)
{
	f();
system("pause");
return 0;
}


