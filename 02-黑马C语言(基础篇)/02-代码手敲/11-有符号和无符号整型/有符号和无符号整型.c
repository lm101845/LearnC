/*************************************************************************************
 * �� �� ��:   �з��ź��޷��ŵ�����.c
 * �� �� �ߣ�  liming
 * ����ʱ�䣺  2021/10/23 16:56
*************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//�з��ź��޷��� ����
void test01()
{
	//�з��ŵ�int���͵ĳ���
	printf("%d\n", 10);

	//�޷��ŵ�int���͵ĳ���
	printf("%d\n", 10U);

	//�з��ŵ�long���͵ĳ���
	printf("%ld\n", 10L);

	//�޷��ŵ�long���͵ĳ���
	printf("%lu\n", 10UL);
}

//�з��ź��޷��ŵı���
void test02()
{
	//�����з��ŵı�������Ĭ�ϼ��˹ؼ���signed(�㲻дҲĬ�ϼӵ�)
	signed int a = 100;
	printf("%d\n",a);

	//�����޷��ŵı��������ֶ���ӹؼ��֡���unsigned
	unsigned int a2 = 102;
	printf("%u\n",a2);
}
int main()
{
	test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
