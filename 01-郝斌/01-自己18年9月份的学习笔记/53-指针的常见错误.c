/*


*/

#include <stdio.h>

int main(void)
{
	int* p;
	int* q;
	int i = 5;
	
	//*p = i;
	p = &i;
	//*q = p;		*q��int���ͣ�p��int*���ͣ��ͺŲ�һ�»ᱨ��
	//*q = *p; 		�����д�����Ϊ*û�и�����ֵ 
	printf("%d\n",*p);

system("pause");
return 0;
}


