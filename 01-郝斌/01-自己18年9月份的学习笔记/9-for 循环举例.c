/*
18-09-14 22:06
求1-100之间所有奇数的和 
*/ 

#include <stdio.h>

int main(void)
{
	int i;
	int sum=0;
	
	for (i=1; i<10; i+=2)		//i++2等价于 i=i+2， 
		{
		
				sum=sum+i;
				//printf("今天我很高兴！\n");
		}
		printf("i=%d\n",i);
		printf("sum=%d\n",sum);

system("pause");
return 0;
}


