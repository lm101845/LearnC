#include <stdio.h>

int main(void)
{
	int i=3;
	int j=5;
	int t;	//������ʱ������temporary) 
	
	//6��7�д����޷�ʵ��i��j�ĺ����� 
	//i=j;	//i=5��j=5 
	//j=i;	//i=5; j=5
	
	//��ȷ�Ļ���i��j�ķ��� 
	t=i;
	i=j;
	j=t;
	
	printf("i = %d,j=%d\n",i ,j);

 
    system("pause");
	return 0;
}


