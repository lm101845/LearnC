#include <stdio.h>

int main(void)
{
	int sum=0;
	int i;
	
	i=1;
	while (i<101)
	{
		sum=sum+i;
		++i;		//这两个顺序不能换 
	}
	

printf("sum=%d\n",sum);

system("pause");
return 0;
}

//for和while之间可以相互转化 
//但是for逻辑性更强一点，更不容易出错，推荐多使用for  
