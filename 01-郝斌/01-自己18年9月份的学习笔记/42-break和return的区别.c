/*
return和break的区别 
break是终止循环和switch的，return是用来终止函数的 
*/

#include <stdio.h>

void f(void)
{
	int i;
	
	for(i=0; i<5;++i)
		{
		printf("大家辛苦了！\n");
		break;
		//return;
		}
		printf("同志们好！\n");
}

int main(void)
{


system("pause");
return 0;
}


