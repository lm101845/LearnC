//2022��5��16��18:34:57

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//�ṹ�������C���Դ����µ����ͳ���
//����һ��ѧ��
struct Stu
{
	char name[20];
	int age;
	double score;
};

//����һ���������
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = {"����",20,85.5};   //�ṹ��Ĵ����ͳ�ʼ��
	printf("%s %d %lf\n", s.name, s.age, s.score);   //����������ṹ�����.��Ա����
	struct Stu* ps = &s;
	//s�ǽṹ�����ͣ�ps�ǽṹ��ָ��
	printf("�ڶ��ִ�ӡ����:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("�����ִ�ӡ����,ʹ�ù���ͷ:%s %d %lf\n", ps->name, ps->age, ps->score);
	system("pause");
	return EXIT_SUCCESS;
}
