/*
18-09-14 22:21
��1-100֮�����е��ܱ�3����������֮�� 
*/

#include <stdio.h>

int main(void)
{
	int i;
	int sum=0;
	
	for(i=3; i<=12; ++i)
	{
		if(i%3==0)  //���i�ܱ�3���� 
		   
		   sum=sum+i;
	
		printf("sum=%d\n",sum);
	}

	system("pause");
	return 0;
}


