//2022��5��16��14:23:17
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	int a = 10;  //�Զ��������Զ����ٵġ����Զ�����
	//ǰ���autoʡ���ˣ�������Ӧ����auto int a = 10;
	//auto �µ�C�����﷨��Ҳ�������÷�������ʱ������

	//extern�����������ⲿ����

	register int num = 100;   //����num��ֵ����ڼĴ�������
	//���������Ƿ���ڼĴ������棬������˵���㣬���ǼĴ���˵����ģ���ֻ�ܽ���

	//signed     �з��ŵ�
	//unsigned   �޷��ŵ�
	//union      ������(������)
	//void	     ��,��
	//volatile   ���������Ż���C������ʱ����
	//define include�����ǹؼ��֣��������ǽ�Ԥ����ָ��
	system("pause");
	return EXIT_SUCCESS;
}
