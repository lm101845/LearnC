/**
	2022��1��2�� 
*/

 
#include<stdio.h>

//��ֻ�Ƕ�����һ���µ���������,��û�ж������ 
struct Student
{
	int age;
	char sex;
	char name[100];
	
};   //�ֺŲ���ʡ

int main(void)
{
	struct Student st = {20,'F',"С��"};
	struct Student *pst = &st;
	
	printf("%d %c %s\n",st.age,st.sex,st.name);  //���Ƽ�����д 
	printf("%d %c %s\n",pst->age,pst->sex,pst->name);   //�Ƽ�����д  //pst->age�ڲ�ת��Ϊ(*pst).age���ȼ��� st.age 
	//��ָ����Ϊ�˴���ʱ�����ڴ�ʹ�� 
} 

