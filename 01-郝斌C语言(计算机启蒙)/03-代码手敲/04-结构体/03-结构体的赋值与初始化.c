/**
	2022年1月2日 
*/

#include<stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st = {80,66.6,'F'};   //初始化  定义的同时赋初始值
	struct Student st2;
	st2.age = 10;
	st2.score = 88;
	st2.sex = 'M';
	//赋值只能单个单个的赋值,而初始化可以整体初始化 
	printf("%d %f %c\n",st.age,st.score,st.sex);
	printf("%d %f %c\n",st2.age,st2.score,st2.sex);
	return 0;
}
