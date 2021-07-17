/*

一个函数的功能尽量独立，单一
多学习，多模仿牛人的代码
函数是C语言的基本单位，类是Java,C#,C++的基本单位 
这个程序到底要用几个函数来涉及，这是一个很重要的问题，这个可以体现出一个程序员水平的高低
这个函数不对啊？ 
*/

#include <stdio.h>
// 本函数的功能是：判断m是否是素数，是返回true,不是返回false 

bool IsPrime (int m)
{
	int i;
	
	for (i=2; i<m; ++i)
	{
		if(0 == m%i)
			break;
	}
	if(i== m)
		return true;
	else
		return false;
}




// 本函数的功能是把1到n之间所有的素数在显示器上输出 
void TraverseVal (int n)
{
	int i;
	
 	for (i=2; i<=n; ++i)
 	{
		if( IsPrime(i))
			printf("%d\n",i)
 	}
}
int main(void)

{
	int val
	
	scanf("%d",&val);
	TraverseVal(val);


printf("\n");

system("pause");
return 0;
}


