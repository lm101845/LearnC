//2022��12��24��11:13:04

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct B
{
	char c;
	short s;
	double d;
};

struct Stu 
//struct���ṹ��ؼ���
//Stu���ṹ�����͵�����
{
	//��Ա����
	char name[20];  //����
	int age;  //����
	char id[20];  //ѧ��
	struct B sb;
	//�ṹ��ĳ�Ա��������������Ľṹ��
}s1, s2;   //�����s1,s2Ҳ�ǽṹ�����

//����
//s1,s2��ȫ�ֱ���
//��main�����s�Ǿֲ�����


//int main()
//{
//	//struct Stu s;  //������һ��s����(δ��ʼ��)
//	struct Stu xiaoming = { "С��",12,"20221224",{'w',20,3.14}};  //��ʼ��
//
//	//�ṹ����ʵ�2������������(.)�ͼ�ͷ(->,���ڽṹ��ָ����ȥ)
//
//	printf("%c\n", xiaoming.sb.c);  //%c             �ַ�
//	printf("%s\n", xiaoming.id);    //%s             �ַ���
//	system("pause");
//	return EXIT_SUCCESS;
//};


//int main()
//{
//	struct Stu xiaoming = { "С��",12,"20221224",{'w',20,3.14} };
//	struct Stu* ps = &xiaoming;  
//	//psָ�����һ���ṹ������
//	printf("%c\n", (*ps).sb.c);  //д��1
//	printf("%c\n", ps->sb.c);      //д��2
//	system("pause");
//	return EXIT_SUCCESS;
//}

void print1(struct Stu t)
//��xiaoming������t,t����͵õ���xiaoming������ֵ
{
	printf("%s %d %s %c %d %lf \n",t.name,t.age,t.id,t.sb.c,t.sb.s,t.sb.d);
}

void print2(struct Stu* ps)
{
	printf("%s %d %s %c %d %lf \n", ps->name, ps->age, ps->id, ps->sb.c, ps->sb.s, ps->sb.d);
}
//int main()
//{
//	//�ṹ�崫��
//	struct Stu xiaoming = { "С��",12,"20221224",{'w',20,3.14} };
//	//дһ����������ӡxiaoming������
//	print1(xiaoming);	
//	//��ֵ����(ʵ�δ��βΣ��β�Ҫ���ܣ�Ҳ��Ҫ������ô��һ���ڴ�ռ���գ�����)
//	//��������ͨ���βθı�xiaoming���ݣ��ǸĲ��˵�
//	print2(&xiaoming);  
//	//��ַ���á������ֱȽϺ�(����ַ��ֻ��8���ֽڽ��վͺ��ˣ�ʡ�ڴ�)
//	system("pause");
//	return EXIT_SUCCESS;
//}


int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
 
//ÿһ���������ã��������ڴ��ջ���ϣ�����һ��ռ䣡��
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = Add(a, b);
	system("pause");
	return EXIT_SUCCESS;
}

