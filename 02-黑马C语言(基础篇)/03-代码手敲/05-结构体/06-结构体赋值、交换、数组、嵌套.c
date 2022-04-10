/*************************************************************************************
 * �� �� ��:   06-�ṹ�帳ֵ�����������顢Ƕ��.c
 * �� �� �ߣ�  liming
 * ����ʱ�䣺  2022/04/10 13:01
*************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Student {
	int id; //ѧ��
	char name[64];  //����
	double score;  //����
};

void test01()
{
	//�����ṹ�����
	struct Student s1;  //��һ����û�и���ʼֵ
	struct Student s2 = { 1,"����",90 };
	//��������Ҫ��s2������Ϣȫ����ֵ��s1

	//����1:�����Ա��ֵ
	//s1.id = s2.id;
	//strcpy(s1.name, s2.name);
	//s1.score = s2.score;

	//����2�����帳ֵ(ǰ�᣺��ͬ�������ͽṹ�����֮��)
	//s1 = s2;

	//����3��memcpy
	memcpy(&s1, &s2, sizeof(struct Student));

	printf("ѧ��:%d\n", s1.id);
	printf("����:%s\n", s1.name);
	printf("����:%.1f\n", s1.score);

	//���ṹ���Ա���ԣ����¸�ֵ
	//printf("��ѧ�����¸�ֵ\n");
	//scanf("%d", &s1.id);
	//printf("ѧ��:%d\n", s1.id);
}

//�ṹ��������Ľ���
void test02()
{
	struct Student s1 = { 1,"Tom",86 };
	struct Student s2 = { 2,"Jerry",98 };
	//��������̫�鷳
	//int idTemp = s1.id;
	//s1.id = s2.id;
	//s2.id = idTemp;

	//char nameTemp[64];
	//strcpy(nameTemp, s1.name);
	//strcpy(s1.name, s2.name);
	//strcpy(s2.name, nameTemp);

	//int scoreTemp = s1.score;
	//s1.score = s2.score;
	//s2.score = scoreTemp;

	//���廥��
	struct Student temp;
	temp = s1;
	s1 = s2;
	s2 = temp; 

	printf("s1����Ϣ-ѧ�ţ�%d ������%s �÷�:%f\n", s1.id, s1.name, s1.score);
	printf("s2����Ϣ-ѧ�ţ�%d ������%s �÷�:%f\n", s2.id, s2.name, s2.score);
}


//�ṹ�������
void test03()
{
	struct Student arr[5] = {
		{ 1,"����",50 },
		{ 2,"����",65 },
		{ 3,"����",58 },
		{ 4,"����",89 },
		{ 5,"����",84 },
		//���һ����Ա�ĺ��涺�ſ�д�ɲ�д
	};

	//��������
	int len = sizeof(arr) / sizeof(struct Student);
	for (int i = 0; i < len; i++)
	{
		printf("ѧ�ţ�%d ������%s �÷�:%.0f\n", arr[i].id, arr[i].name, arr[i].score);
	}
	//��ϰ���ã�����Щ�˵ķ�������������,������Ҫ��Ӧ��
}

//�ṹ������Ӽ��̻�ȡ��Ϣ
void test04()
{
	struct Student arr[1];
	memset(arr, 0, sizeof(arr));
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("���%d��ѧ�����и�ֵ\n",len);
	for (int i = 0; i < len; i++)
	{
		scanf("%d %s %f", &arr[i].id, arr[i].name, &arr[i].score);
	}
	for (int i = 0; i < len; i++)
	{
		printf("ѧ�ţ�%d ������%s �÷�:%lf\n", arr[i].id, arr[i].name, arr[i].score);
	}
}

//�ṹ��Ƕ�׽ṹ��
struct Stu
{
	int id;   //ѧ��
	int age;  //����
};

struct Tea
{
	int id;  //ְ����
	struct Stu st;  //ѧ��
};


void test05()
{
	struct Tea t1 = { 100,{1,18} };
	struct Tea t2 = { 101,2,19};  //ѧ���ṹ���{}�ǿ���ȥ����
	printf("t1��ʦ��ְ���ţ�%d������ѧ���ţ�%d ѧ��������:%d\n", t1.id, t1.st.id, t1.st.age);
	printf("t2��ʦ��ְ���ţ�%d������ѧ���ţ�%d ѧ��������:%d\n", t2.id, t2.st.id, t2.st.age);
}
int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	system("pause");
	return EXIT_SUCCESS;
}
