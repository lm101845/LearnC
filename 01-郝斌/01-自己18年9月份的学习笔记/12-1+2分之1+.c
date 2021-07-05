#include <stdio.h>

int main(void)
{
	int i;
	float sum=0;
	
	for(i=1;i<=100;++i)
	{
	
		sum=sum+1 / (float)(i);				//(float)(1/i);这样写不行，因为1/i结果是是整型0，强制转换成浮点型还是不行 
											//更简单的写法是 sum=sum+1.0/i;	因为浮点型/整型结果是浮点型 
	}
	

printf("sum=%f\n",sum);			//float必须用%f输出 
system("pause");
return 0;
}


