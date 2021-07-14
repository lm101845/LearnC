#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int m;
	
	i=j=3;		//等价于i=3; j=3
	
	k=i++;		//后自增整体表达式的值是i+1之前的值 
	m=++j ;		//前自增整体表达式的值是i+1之后的值 
				//i=i+1;等价于 i+=1; 

	printf("i=%d , j=%d , k=%d ,m=%d\n",i ,j ,k, m);

system("pause");
return 0;
}

/*
运行结果是：
------------------------ 
i=4 , j=4 , k=3 ,m=4
------------------------ 
*/ 
