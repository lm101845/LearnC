/*
return��break������ 
break����ֹѭ����switch�ģ�return��������ֹ������ 
*/

#include <stdio.h>

void f(void)
{
	int i;
	
	for(i=0; i<5;++i)
		{
		printf("��������ˣ�\n");
		break;
		//return;
		}
		printf("ͬ־�Ǻã�\n");
}

int main(void)
{


system("pause");
return 0;
}


