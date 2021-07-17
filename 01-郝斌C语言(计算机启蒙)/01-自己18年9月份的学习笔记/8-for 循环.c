/*
18-09-14 18:38

1+2+3+.......+100

*/

#include <stdio.h>

int main(void)
{
	int i;
	int sum =0;
	
	for (i=1; i<=100;++i)
		sum= sum+i;

printf("sum=%d\n",sum);
system("pause");
return 0;
}


