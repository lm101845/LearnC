/**
	2022年1月2日 
*/

 
#include<stdio.h>

//这只是定义了一个新的数据类型,并没有定义变量 
struct Student
{
	int age;
	char sex;
	char name[100];
	
};   //分号不能省

int main(void)
{
	struct Student st = {20,'F',"小娟"};
	struct Student *pst = &st;
	
	printf("%d %c %s\n",st.age,st.sex,st.name);  //不推荐这样写 
	printf("%d %c %s\n",pst->age,pst->sex,pst->name);   //推荐这样写  //pst->age内部转化为(*pst).age，等价于 st.age 
	//用指针是为了传参时减少内存使用 
} 

