#include <stdio.h>

int main(void)
{
	int i;
	float sum=0;
	
	for(i=1;i<=100;++i)
	{
	
		sum=sum+1 / (float)(i);				//(float)(1/i);����д���У���Ϊ1/i�����������0��ǿ��ת���ɸ����ͻ��ǲ��� 
											//���򵥵�д���� sum=sum+1.0/i;	��Ϊ������/���ͽ���Ǹ����� 
	}
	

printf("sum=%f\n",sum);			//float������%f��� 
system("pause");
return 0;
}


