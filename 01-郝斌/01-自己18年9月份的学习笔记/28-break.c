#include <stdio.h>

int main(void)
{
	int i;
/*
	switch(2)
	{
	case 2;
		printf("哈哈！\n"};
		break;			
	}
	*/
	for(i=0; i<3; ++i )
	{
		if(3>2)
		break;				//break虽然是if内部的语句，但break终止的却是外部的for循环 
		printf("嘿嘿！\n");	//永远不会输出 
	
	}
	
	system("pause");
	return 0;
}

/*
break如果用于循环是用来终止循环 
break如果用于switch，则是用于终止swich 
break不能直接用于if,除非if属于循环内存的一个子句 
*/
