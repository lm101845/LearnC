//2022��6��24��18:55:53

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//�����Ķ��塪������ǰ�棬�Ͳ���Ҫ��������
//��Ϊ���屾�����һ��ǿ����������
//int Add(int x, int y)
//{
//	return x + y;
//}


int main()
{
	int a = 10;
	int b = 20;
	//��������һ��
	int Add(int, int);    
	//������ǰ����һ�£���ʹAdd������main�������涨��ģ�Ҳ�����о�����
	int c = Add(a, b);
	printf("%d\n", c);
	system("pause");
	return EXIT_SUCCESS;
}

//�����Ķ��塪�����ں��棬��Ҫ��ǰ��������һ��
int Add(int x, int y)
{
	return x + y;
}
