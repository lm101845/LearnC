/**
	2021��12��25�� merry christmas 
*/
// һά�������Ǹ�ָ�볣��������ŵ���һά�����һ��Ԫ�صĵ�ַ��
/**
	int 			%d
	long int 		%ld
	char 			%c
	float 			%f
	double			%lf
	16����			%#X
*/
#include <stdio.h>

int main(void)
{
	int a[5];    //a����������5������Ԫ�صĸ��� Ԫ�ؾ��Ǳ���a[0]����a[4] 
	int b[5];
	//a = b;   //error a�ǳ������������ǲ��ǵ�ַ���㲻�ܰ�һ��ֵ����һ������ 
	printf("%#X\n",&a[0]);  //������a��ֵӦ�ú�&a[0]��һ����
	printf("%#X\n",a);
	return 0; 
} 
