/**
	2022年4月4日 
*/
#include <iostream>
int main()
{
	typedef int MYINT;
	//意思是我们给int类型取了一个新名字叫MYINT
	MYINT a = 0;
	printf("%d\n",a);
	
	typedef char MYCHAR;
	MYCHAR ch = 'c';
	printf("%c\n",ch);
	
	return 0;
} 

