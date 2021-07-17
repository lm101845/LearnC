/*
地址运算符：&不能对没有地址的东西取地址 

*/

#include <stdio.h>

int main(void)
{
	int i =0;
	int p;
	p = (int)&i;
	printf("0X%X\n",&i);
	printf("%p\n",&i);			//和上面显示的地址一样 
	printf("%Lu\n",sizeof(int));
	printf("%Lu\n",sizeof(&i));	
	




system("pause");
return 0;
}


