#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int m;
	
	i=j=3;		//�ȼ���i=3; j=3
	
	k=i++;		//������������ʽ��ֵ��i+1֮ǰ��ֵ 
	m=++j ;		//ǰ����������ʽ��ֵ��i+1֮���ֵ 
				//i=i+1;�ȼ��� i+=1; 

	printf("i=%d , j=%d , k=%d ,m=%d\n",i ,j ,k, m);

system("pause");
return 0;
}

/*
���н���ǣ�
------------------------ 
i=4 , j=4 , k=3 ,m=4
------------------------ 
*/ 
