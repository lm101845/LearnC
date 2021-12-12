/**
	2021年12月12日 
*/
#include <stdio.h>

int main(void)
{
	int* p;  //等价于 int *p 也等价于int * p,老师建议写int * p，但是我喜欢写int* p
	
	int i = 5;
	
	//p = 5;  
	//这样写会报错，因为p存放的是int型的地址，而5不是地址，所以会报错(地址是有特定格式的) 
	
	//char ch = A;
	char ch = 'A';
	//C语言规定，如果要表示单个字符，必须用单引号括起来 ；如果是字符串，必须用双引号括起来 
	
	//p = &ch;
	//&ch是字符的地址，不是整型变量的地址，所以还是会报错 
	
	p = &i;
	
	*p = 99;
	printf("%d\n",i);
	 
	printf("%d\n",p); 
	printf("%p\n",p);
	
	printf("%d\n",*p);
	
	//*p表示以p的内容为地址的变量的值 
	return 0;
} 


