#include <stdio.h>

int main(void)
{
	if (3>2)
	
		printf("AAAA\n");
	else
		printf("BBBB\n");
		
	printf("CCCC\n");			//CCCC是不属于上面这块的，所以它一定会输出 

system("pause");

return 0;
}


