#include <stdio.h>
#include<math.h>

int main(void)
{
	double a, b, c;
	double delta;
	double x1,x2;
	char ch;
	do
	{	
		printf("������һԪ���η��̵�����ϵ����\n");
		printf("a=");
		scanf("%lf", &a);
		
		printf("b=");
		scanf("%lf", &b);
		
		printf("c=");
		scanf("%lf", &c);
		 
		 delta =b*b-4*a*c;
		 
		 if (delta >0)
		 {
		 	x1=(-b+sqrt(delta))/(2*a);
		 	x2=(-b-sqrt(delta))/(2*a);
			printf("�������⣬x1=%f,x2=%f\n", x1, x2);
		 }
		else if(0==delta)
		{
			x1=x2=(-b)/(2*a);
			printf("��Ψһ�⣬x1=x2=$f\n",x1,x2);
		}
		else 
		{
	printf("��ʵ���⣡\n");
		}
	printf("���������Y/N):");
	scanf(" %c", &ch);		//ǰ�����ü�һ���ո�ԭ���� 
	}
	while('y'==ch || 'Y'==ch);
	system("pause");
	return 0;
}


