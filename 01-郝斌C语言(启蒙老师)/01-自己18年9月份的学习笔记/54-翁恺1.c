/*
��ַ�������&���ܶ�û�е�ַ�Ķ���ȡ��ַ 

*/

#include <stdio.h>

int main(void)
{
	int i =0;
	int p;
	p = (int)&i;
	printf("0X%X\n",&i);
	printf("%p\n",&i);			//��������ʾ�ĵ�ַһ�� 
	printf("%Lu\n",sizeof(int));
	printf("%Lu\n",sizeof(&i));	
	




system("pause");
return 0;
}


