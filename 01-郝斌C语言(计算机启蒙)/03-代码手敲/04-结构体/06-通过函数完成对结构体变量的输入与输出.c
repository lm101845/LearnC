/**
	2022��1��2��16:58:46 
*/

/**
	ָ�����Ҫ��:
		1.��ʾһЩ���ӵ����ݽṹ
		2.���ٵĴ�������,�������ڴ�ĺ���
		3.ʹ��������һ�����ϵ�ֵ
		4.��ֱ�ӷ���Ӳ��
		5.�ܹ�����Ĵ����ַ���
		6.���������������������õĻ���
	�ܽ�:ָ���Ǵ�C���Ե���� 
*/

/***
	ʾ����
		���͵�ַ���Ƿ�������
	Ŀ�ģ� 
		ָ����ŵ�֮һ:���ٵĴ������ݡ������ڴ�С�������ٶȿ� 
*/
 
#include<stdio.h>
#include<string.h>
struct Student
{
	int age;
	char sex;
	char name[100]; 
	//�ṹ�������С���������б�����С�ĺͣ���������ͱ�����ռ������ֽ����͵ı������������������ 
};

void InputStudent(struct Student*  stu);

int main(void)
{
	struct Student st; 
	printf("%d\n",sizeof(st));
	//InputStudent(st);  //�Խṹ���������  �������뷢��st�ĵ�ַ 
	InputStudent(&st);  
	//printf("%d %c %s\n",st.age,st.sex,st.name); 
	OutputStudent(st);  //�Խṹ�������� ����  ���Է���st�ĵ�ַҲ���Է���st������ (��������Ϊ�����ִ���ٶȣ��Ƽ����͵�ַ) 
	return 0;
}


//����������ڶ�һ���ṹ������������룬����һ��Ҫ���β� 
//st��һ��������stuҲ��һ��������������������������Ҳ��һ�µ� 
//stu��ͨ������������ ���������з���ģ�������һ���Ǿ�̬�ģ������޷���stu��ֵ���и�д 
//����д�����ǲ��Ե� ----�������޷��޸������� 
//void InputStudent(struct Student stu)
void InputStudent(struct Student* pstu)
//pstuֻռ4���ֽ�(һ��ָ�����,������ָ��ı���ռ�����ֽ�,������ֻռ4���ֽ�,��Ϊһ�������ĵ�ַֻ������һ���ֽڵĵ�ַ����ʾ) 
{
	//stu.age = 10;
	//strcpy(stu.name,"����");   //����д��stu.name="����"  -----���Ҫ���潲�ַ����Ĵ������ 
	//stu.sex = 'F'; 
	(*pstu).age = 10;
	strcpy(pstu->name,"����");
	pstu->sex = 'M';
}

//void OutputStudent(struct Student ss)
void OutputStudent(struct Student* pst)
//�β�ss��st��ֵ�ǲ�һ����,�޸�ss��ֵ����Ӱ��st,�޸�st����Ӱ��ss,�������ڰ�st��ֵ����ss��,��������һ����
//�������ֻ������޸�,���ǿ��Է���st�ĵ�ַҲ���Է���st������ (��������Ϊ�����ִ���ٶȣ��Ƽ����͵�ַ) 
{
	//printf("%d %c %s\n",ss.age,ss.sex,ss.name); 
	printf("%d %c %s\n",pst->age,pst->sex,pst->name); 
}
