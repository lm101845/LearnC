#include <stdio.h>

void max(int i, int j)				//max是函数的名字，i和j是形式参数，简称形参 void表示函数没有返回值 
{
	if(i>j)
		printf("%d\n",i);
	else
		printf("%d\n",j);

}

int main(void)				//所有的程序都是先执行main函数 
{
	int a, b, c, d, e, f;
	a=1 ,b=2, c=3, d=9,  e=-5, f=100;
	
	max(a,b);				//max是工具，是函数的名字 
	max(c,d);				//通过函数可以避免写大量重复性代码 
	max(e,f);
/*
if(a>b)
	printf("%d\n",a);
else
	printf("%d\n",b)
	
if(b>c)
	printf("%d\n",b);
else
	printf("%d\n",c)
	
等等等... 


*/
printf("\n");

system("pause");
return 0;
}


