/**
2021��11��28�� 
*/

//��ά�����������Ԫ����һά�����һά���飬������ÿ��Ԫ�ض���һά���� 
#include <iostream>
using namespace std;

int main()
{
	int b[4][3] = {
					{1,2,3},
					{4,5,6},
					{7,8,9},
					{10,11,12} 
				  };
	for(int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
			cout<<b[i][j]<<"\t";
		cout<<endl; 
	}
	return 0; 
} 
