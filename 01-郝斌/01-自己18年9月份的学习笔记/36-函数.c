#include <stdio.h>

void max(int i, int j)				//max�Ǻ��������֣�i��j����ʽ����������β� void��ʾ����û�з���ֵ 
{
	if(i>j)
		printf("%d\n",i);
	else
		printf("%d\n",j);

}

int main(void)				//���еĳ�������ִ��main���� 
{
	int a, b, c, d, e, f;
	a=1 ,b=2, c=3, d=9,  e=-5, f=100;
	
	max(a,b);				//max�ǹ��ߣ��Ǻ��������� 
	max(c,d);				//ͨ���������Ա���д�����ظ��Դ��� 
	max(e,f);
/*
if(a>b)
	printf("%d\n",a);
else
	printf("%d\n",b)
	
if(b>c)
	printf("%d\n",b);
else
	printf("%d\n",c)
	
�ȵȵ�... 


*/
printf("\n");

system("pause");
return 0;
}


