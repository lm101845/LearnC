/*
��1��ĳ������֮�䣨���������֣����е����������������
ֻ��main����ʵ�֣��о�����
	1.����������Բ���
	2.���벻������� 

*/

#include <stdio.h>

int main(void)
{
	int val;
	int i;
	int j;
	
	scanf("%d", &val);
	for (i=2; i<= val; ++i)
	{
		for(j=2; j<i; ++j)
		{
				if (0== i%j)
					break;											//�ж�i�Ƿ����������Ǿ���������ǾͲ���� 
	   }
	if(j== i)
		printf("%d\n",i);
	}

	system("pause");
	return 0;
}


