#include <stdio.h>

int main(void)
{
	int i;
/*
	switch(2)
	{
	case 2;
		printf("������\n"};
		break;			
	}
	*/
	for(i=0; i<3; ++i )
	{
		if(3>2)
		break;				//break��Ȼ��if�ڲ�����䣬��break��ֹ��ȴ���ⲿ��forѭ�� 
		printf("�ٺ٣�\n");	//��Զ������� 
	
	}
	
	system("pause");
	return 0;
}

/*
break�������ѭ����������ֹѭ�� 
break�������switch������������ֹswich 
break����ֱ������if,����if����ѭ���ڴ��һ���Ӿ� 
*/
