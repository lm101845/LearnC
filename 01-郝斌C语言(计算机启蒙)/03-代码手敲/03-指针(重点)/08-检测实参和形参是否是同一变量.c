/**
	2021��12��12�� 
*/
#include <stdio.h>

void f(int i)
{
	i = 99;
} 

//int f(int i)
//{
//	//i = 99;
//	return i;
//	//ʵ�κ��β���Զ�ǲ�ͬ�ı��� 
//} 

int main(void)
{
	int i = 6;
	printf("i = %d\n",i);
	
	f(i);
	//������һ�����ߣ�һ���������ִ����ϣ�Ϊ�����������ľ�̬�ռ䶼�ᱻ�ͷŵ� 
	printf("i = %d\n",i);
	//2��i����6��f�����е�i��ֵû�з��� 
	
	//f(4); 
	//printf("i = %d\n",i);
	return 0;
} 
