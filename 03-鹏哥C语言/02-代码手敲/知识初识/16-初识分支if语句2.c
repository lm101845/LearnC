//2022��5��17��13:16:37

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int test()
{
	if (1)
		return 0;
	return 1;
}

int main()
{
	//����1
	int condition = 0;
	int x = 1;
	int y = 2;
	if (condition) {
		return x; 
		//�����returnִ��֮�󣬺����ͽ����ˣ�����ľͲ���ִ����
	}
	return y;

	//����2
	if (condition)
	{
		return x;
	}
	else
	{
		return y;
	}
	//����1�ʹ���2��Ч����һ����,���Ǵ���2Ч������

	test();

	int num = 5;
	//if (num = 3) //�������дһ���Ⱥţ�����˸�ֵ��������Ҳ���ᱨ��
	if (3 == num)   
	//�������ͳ������бȽϵ�ʱ�򣬽�����������ߣ����������
	//�������д��һ���Ⱥţ��������ᱨ��
		printf("hehe\n");

	system("pause");
	return EXIT_SUCCESS;
}
