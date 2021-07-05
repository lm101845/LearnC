#include <stdio.h>

int main(void)
{
	int i;
	int sum=0;
	
	for(i=1;i<101;++i)
	{
		if (i%2==1)//(iÊÇÆæÊý)
			sum += i;	//sum=sum+i; 
	
	
	}
	
printf("sum=%d\n",sum);

system("pause");
return 0;
}


