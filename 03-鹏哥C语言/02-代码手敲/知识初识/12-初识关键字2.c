//2022��5��16��14:43:12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned int u_int;

//����ȫ�ֱ���
//extern int g_val;
int g_val;  //���治дexternҲ�ǿ��Եģ�����
//������ʱ����Ҫָ��ֵ�ã�ֻ��Ҫָ�����ֺ����;Ϳ�����

//��������
extern int Add(int x, int y);
void test()
{
	//int a = 1;
	//ÿ�ε���test������ʱ�򶼻ᴴ��a,a��һ���ֲ�����
	//�ֲ�����(���뷶Χ����[�������]�������˳���Χ[�Ҵ�����]����)
	
	//����aǰ�����static֮�����Ͳ������ˣ���һ�ν���test������ʱ��a����
	static a = 1;
	a++;
	printf("%d\n", a);
}

int main()
{

	//typedef ���͡��ء�����
	//unsigned intд���������㣬���Լ�һ����д
	unsigned int num = 100;
	u_int num2 = 100;  //u_int����unsigned int���͵����ͱ���

	//static     ��̬��
	//1.static���ξֲ�����,�ı��˾ֲ���������������(�������Ǹı��˱����Ĵ洢����)

	//2.static���γ�Ա����
	//3.static���κ���

	//�ڴ����
	//1.ջ�����ֲ������������Ĳ���
	//2.��������̬�ڴ�ķ���
	//3.��̬����ȫ�ֱ�����static���εľ�̬����
	//(��̬�������������ں�ȫ�ֱ���������������һ���ģ����ǳ���)
	int i = 0;
	while (i < 10) {
		test();
		i++;
	}

	printf("%d\n", g_val);

	int m = 10;
	int n = 20;
	int sum = Add(m, n);
	printf("sum=%d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}
