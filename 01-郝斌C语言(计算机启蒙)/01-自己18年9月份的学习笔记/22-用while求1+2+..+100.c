#include <stdio.h>

int main(void)
{
	int sum=0;
	int i;
	
	i=1;
	while (i<101)
	{
		sum=sum+i;
		++i;		//������˳���ܻ� 
	}
	

printf("sum=%d\n",sum);

system("pause");
return 0;
}

//for��while֮������໥ת�� 
//����for�߼��Ը�ǿһ�㣬�������׳����Ƽ���ʹ��for  
