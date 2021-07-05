#include <stdio.h>

int main(void)
{
	int a, b, c;	//等价于int a; int b;  int  c; 
	int t;
	
	

printf("请输入三个整数（中间以空格分割)：");
scanf("%d %d %d" ,&a, &b, &c);

//编写代码完成a最大值，b是中间值，c是最小值 

if (a<b)
{
 t=a;
 a=b;
 b=t;
 } 
 
 if(a<c)
 {
  t=a;
  a=c;
  c=t;
 }
 
 if(b<c)
 {
 t=b;
 b=c;
 c=t;
 }
printf("%d %d %d\n",a, b, c );

system("pause");
return 0;
}


