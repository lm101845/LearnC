/*

һ�������Ĺ��ܾ�����������һ
��ѧϰ����ģ��ţ�˵Ĵ���
������C���ԵĻ�����λ������Java,C#,C++�Ļ�����λ 
������򵽵�Ҫ�ü����������漰������һ������Ҫ�����⣬����������ֳ�һ������Աˮƽ�ĸߵ�
����������԰��� 
*/

#include <stdio.h>
// �������Ĺ����ǣ��ж�m�Ƿ����������Ƿ���true,���Ƿ���false 

bool IsPrime (int m)
{
	int i;
	
	for (i=2; i<m; ++i)
	{
		if(0 == m%i)
			break;
	}
	if(i== m)
		return true;
	else
		return false;
}




// �������Ĺ����ǰ�1��n֮�����е���������ʾ������� 
void TraverseVal (int n)
{
	int i;
	
 	for (i=2; i<=n; ++i)
 	{
		if( IsPrime(i))
			printf("%d\n",i)
 	}
}
int main(void)

{
	int val
	
	scanf("%d",&val);
	TraverseVal(val);


printf("\n");

system("pause");
return 0;
}


