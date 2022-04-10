/*************************************************************************************
 * 文 件 名:   06-结构体赋值、交换、数组、嵌套.c
 * 创 建 者：  liming
 * 创建时间：  2022/04/10 13:01
*************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Student {
	int id; //学号
	char name[64];  //姓名
	double score;  //分数
};

void test01()
{
	//创建结构体变量
	struct Student s1;  //第一个人没有赋初始值
	struct Student s2 = { 1,"张三",90 };
	//我现在想要把s2身上信息全都赋值给s1

	//方法1:逐个成员赋值
	//s1.id = s2.id;
	//strcpy(s1.name, s2.name);
	//s1.score = s2.score;

	//方法2：整体赋值(前提：相同数据类型结构体变量之间)
	//s1 = s2;

	//方法3：memcpy
	memcpy(&s1, &s2, sizeof(struct Student));

	printf("学号:%d\n", s1.id);
	printf("姓名:%s\n", s1.name);
	printf("分数:%.1f\n", s1.score);

	//给结构体成员属性，重新赋值
	//printf("给学号重新赋值\n");
	//scanf("%d", &s1.id);
	//printf("学号:%d\n", s1.id);
}

//结构体体变量的交换
void test02()
{
	struct Student s1 = { 1,"Tom",86 };
	struct Student s2 = { 2,"Jerry",98 };
	//这样互换太麻烦
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

	//整体互换
	struct Student temp;
	temp = s1;
	s1 = s2;
	s2 = temp; 

	printf("s1的信息-学号：%d 姓名：%s 得分:%f\n", s1.id, s1.name, s1.score);
	printf("s2的信息-学号：%d 姓名：%s 得分:%f\n", s2.id, s2.name, s2.score);
}


//结构体的数组
void test03()
{
	struct Student arr[5] = {
		{ 1,"张三",50 },
		{ 2,"李四",65 },
		{ 3,"王五",58 },
		{ 4,"赵六",89 },
		{ 5,"凯七",84 },
		//最后一个成员的后面逗号可写可不写
	};

	//遍历数组
	int len = sizeof(arr) / sizeof(struct Student);
	for (int i = 0; i < len; i++)
	{
		printf("学号：%d 姓名：%s 得分:%.0f\n", arr[i].id, arr[i].name, arr[i].score);
	}
	//练习布置：将这些人的分数做升序排序,并且人要对应上
}

//结构体数组从键盘获取信息
void test04()
{
	struct Student arr[1];
	memset(arr, 0, sizeof(arr));
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("请给%d个学生进行赋值\n",len);
	for (int i = 0; i < len; i++)
	{
		scanf("%d %s %f", &arr[i].id, arr[i].name, &arr[i].score);
	}
	for (int i = 0; i < len; i++)
	{
		printf("学号：%d 姓名：%s 得分:%lf\n", arr[i].id, arr[i].name, arr[i].score);
	}
}

//结构体嵌套结构体
struct Stu
{
	int id;   //学号
	int age;  //姓名
};

struct Tea
{
	int id;  //职工号
	struct Stu st;  //学生
};


void test05()
{
	struct Tea t1 = { 100,{1,18} };
	struct Tea t2 = { 101,2,19};  //学生结构体的{}是可以去掉的
	printf("t1老师的职工号：%d所带的学生号：%d 学生的年龄:%d\n", t1.id, t1.st.id, t1.st.age);
	printf("t2老师的职工号：%d所带的学生号：%d 学生的年龄:%d\n", t2.id, t2.st.id, t2.st.age);
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
