#include <stdio.h>

int main(void)
{
	int i, j;
	
	for(i=0;i<3 ;++i)
	{
		for(j=1;j<4;++j)
			
			break;
		
		printf("我是天下第一牛人！\n");			//在多层循环中，break只能终止距离它最近的循环 
												//在多层switch嵌套中，break只能终止距离它最近的switch 
	
	} 

printf("\n");

system("pause");
return 0;
}


