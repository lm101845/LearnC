/**
	2022��1��2�� 
*/

//�ṹ����һ������
 
#include<stdio.h>

//��ֻ�Ƕ�����һ���µ���������,��û�ж������ 
struct Student
{
	int age;
	float score;
	char sex;
};


int main(void)
{
	struct Student st = {80,66.6,'F'}; 
	st.age;   //��һ�ַ�ʽ
	
	struct Student* pst = &st; 
	//д*��ʾpst�ܴ��struct Student������ͱ����ĵ�ַ  
	//&st�е�ȡ��ַ��&���ܶ�,��ʾ��st�����ĵ�ַ���͸�pst�� 
	pst->age = 88;  //�ڶ��ַ�ʽ     //����ǽṹ��ָ�� ����ͨ���õ������ַ�ʽ 
	//pst->age�ڼ�����ڲ��ᱻת��Ϊ(*pst).age
	//û��ʲôΪʲô,�����->�ĺ���,��Ҳ��һ��Ӳ�Թ涨 
	//pst->age === (*pst).age === st.age 
	
	//����֮����֪��pst->age === at.age,����Ϊpst->age�Ǳ�ת������(*pst).age��ִ�� 
	
	st.score = 66.6F;   //�ڶ��ַ�ʽ
	printf("%d %f\n",st.age,pst->score); 
	return 0;
}
