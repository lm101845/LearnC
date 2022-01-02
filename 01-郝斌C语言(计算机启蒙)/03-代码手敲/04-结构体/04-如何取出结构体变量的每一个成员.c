/**
	2022年1月2日 
*/

//结构体是一种类型
 
#include<stdio.h>

//这只是定义了一个新的数据类型,并没有定义变量 
struct Student
{
	int age;
	float score;
	char sex;
};


int main(void)
{
	struct Student st = {80,66.6,'F'}; 
	st.age;   //第一种方式
	
	struct Student* pst = &st; 
	//写*表示pst能存放struct Student这个类型变量的地址  
	//&st中的取地址符&不能丢,表示把st变量的地址发送给pst了 
	pst->age = 88;  //第二种方式     //这个是结构体指针 我们通常用得是这种方式 
	//pst->age在计算机内部会被转化为(*pst).age
	//没有什么为什么,这就是->的含义,这也是一种硬性规定 
	//pst->age === (*pst).age === st.age 
	
	//我们之所以知道pst->age === at.age,是因为pst->age是被转化成了(*pst).age来执行 
	
	st.score = 66.6F;   //第二种方式
	printf("%d %f\n",st.age,pst->score); 
	return 0;
}
