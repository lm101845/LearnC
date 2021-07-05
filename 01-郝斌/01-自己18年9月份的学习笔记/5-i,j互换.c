#include <stdio.h>

int main(void)
{
	int i=3;
	int j=5;
	int t;	//定义临时变量（temporary) 
	
	//6和7行代码无法实现i和j的呼唤； 
	//i=j;	//i=5；j=5 
	//j=i;	//i=5; j=5
	
	//正确的互换i和j的方法 
	t=i;
	i=j;
	j=t;
	
	printf("i = %d,j=%d\n",i ,j);

 
    system("pause");
	return 0;
}


