//2023年2月1日14:31:56

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
    //同时又声明了结构体变量s1
    //这个结构体并没有标明其标签
    struct
    {
        int a;
        char b;
        double c;
    } s1;

    //此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
    //结构体的标签被命名为SIMPLE,没有声明变量
    struct SIMPLE
    {
        int a;
        char b;
        double c;
    };
    //用SIMPLE标签的结构体，另外声明了变量t1、t2、t3
    struct SIMPLE t1, t2[20], * t3;

    //也可以用typedef创建新类型
    typedef struct
    {
        int a;
        char b;
        double c;
    } Simple2;
    //现在可以用Simple2作为类型声明新的结构体变量
    Simple2 u1, u2[20], * u3;

    //结构体的成员可以包含其他结构体，也可以包含指向自己结构体类型的指针，
    //而通常这种指针的应用是为了实现一些更高级的数据结构如链表和树等。
 
    //此结构体的声明包含了其他的结构体
    struct COMPLEX
    {
        char string[100];
        struct SIMPLE a;
    };

    //此结构体的声明包含了指向自己类型的指针
    struct NODE
    {
        char string[100];
        struct NODE* next_node;
    };

    //如果两个结构体互相包含，则需要对其中一个结构体进行不完整声明，如下所示：
    struct B;    //对结构体B进行不完整声明

//结构体A中包含指向结构体B的指针
    struct A
    {
        struct B* partner;
        //other members;
    };

    //结构体B中包含指向结构体A的指针，在A声明完后，B也随之进行声明
    struct B
    {
        struct A* partner;
        //other members;
    };
	system("pause");
	return EXIT_SUCCESS;
}
