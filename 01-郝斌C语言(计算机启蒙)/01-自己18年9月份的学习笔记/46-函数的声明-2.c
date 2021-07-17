/*


*/

#include <stdio.h>
//
void f(void);			//声明前面一定要加分号 
void g(void)
{
	f();			//因为函数f的定义放在了调用f语句的后面，所以语法出错 
}

void f(void)
{
	printf("哈哈！\n");
}
int main(void)
{
	g();


system("pause");
return 0;
}


