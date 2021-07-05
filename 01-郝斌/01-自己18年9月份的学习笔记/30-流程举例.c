#include <stdio.h>

int main(void)
{
	int i =0,s =0;
	
	do
	{
		if(i%2)
		{
		i++;
		continue;	
		}
		i++;
		s+=i;	//s=s+i	
	}while (i<5);

	printf("%d\n",s);

system("pause");
return 0;
}


