#include <stdio.h>

int f()
{
	return 10.5;			//��Ϊ�����ķ���ֵ������int ,��������f���ص���10������10.5 
}

int main(void)
{
	int i=99;
	double x=6.6;
	x=f();
printf("%lf\n",x);

system("pause");
return 0;
}


