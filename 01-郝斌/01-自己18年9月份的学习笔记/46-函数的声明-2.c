/*


*/

#include <stdio.h>
//
void f(void);			//����ǰ��һ��Ҫ�ӷֺ� 
void g(void)
{
	f();			//��Ϊ����f�Ķ�������˵���f���ĺ��棬�����﷨���� 
}

void f(void)
{
	printf("������\n");
}
int main(void)
{
	g();


system("pause");
return 0;
}


