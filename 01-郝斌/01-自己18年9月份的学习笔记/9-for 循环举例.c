/*
18-09-14 22:06
��1-100֮�����������ĺ� 
*/ 

#include <stdio.h>

int main(void)
{
	int i;
	int sum=0;
	
	for (i=1; i<10; i+=2)		//i++2�ȼ��� i=i+2�� 
		{
		
				sum=sum+i;
				//printf("�����Һܸ��ˣ�\n");
		}
		printf("i=%d\n",i);
		printf("sum=%d\n",sum);

system("pause");
return 0;
}


