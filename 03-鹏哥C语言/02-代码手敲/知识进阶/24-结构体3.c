//2023年2月24日11:04:37

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//结构体的自引用(结构体里面可以包含结构体)
//实验1：
//struct A
//{
//	int i;
//	char c;
//};
//
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};

//实验2：结构体里面包自己，这种写法行不行？？——不行！！会导致死循环,内存爆炸
//问题：那结构体里面如何实现自引用呢？？？？——使用指针
//struct Node {
//	int d;
//	struct Node n;
//};

//写法1：不能省略tag写法——可以
struct Node
{
	int data;
	struct Node* next;
	//struct Node  类似于   int
	//struct Node* 就类似于 int*
	//因为下一个数据的指针，所以这个指针的类型就是struct Node*
	//这个就叫结构体的自引用(不是包含同类型变量，而是包含同类型指针)
	//这种写法不能省略tag(Node)
};

//写法2：匿名类型写法(省略了tag)——不可以！！！
typedef struct
{
	int data;
	Node* next;  
	//这个Node必须要先有，才能重新命名为Node
	//先后关系：理论上要先有Node*这个结构体成员，才能重命名成为Node变量
	// 所以不能这么写
	//这个就先有蛋还是先有鸡的问题
} Node;


//写法3：——可以！！
typedef struct Node
{
	int data;
	struct Node* next;
	//重新起的名字Node1在结构体成员里面是不能直接用的
	//一般我们把这个新的名字起的和tag名一样
}Node1;

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}
