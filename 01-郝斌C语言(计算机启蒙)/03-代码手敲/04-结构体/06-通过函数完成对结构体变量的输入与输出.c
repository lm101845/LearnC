/**
	2022年1月2日16:58:46 
*/

/**
	指针的重要性:
		1.表示一些复杂的数据结构
		2.快速的传递数据,减少了内存的耗用
		3.使函数返回一个以上的值
		4.能直接访问硬件
		5.能够方便的处理字符串
		6.是理解面向对象语言中引用的基础
	总结:指针是从C语言的灵魂 
*/

/***
	示例：
		发送地址还是发送内容
	目的： 
		指针的优点之一:快速的传递数据、耗用内存小、传输速度快 
*/
 
#include<stdio.h>
#include<string.h>
struct Student
{
	int age;
	char sex;
	char name[100]; 
	//结构体变量大小是里面所有变量大小的和，但是这个和必须是占用最大字节类型的倍数，如果不够，补齐 
};

void InputStudent(struct Student*  stu);

int main(void)
{
	struct Student st; 
	printf("%d\n",sizeof(st));
	//InputStudent(st);  //对结构体变量输入  ——必须发送st的地址 
	InputStudent(&st);  
	//printf("%d %c %s\n",st.age,st.sex,st.name); 
	OutputStudent(st);  //对结构体变量输出 ——  可以发送st的地址也可以发送st的内容 (但是我们为了提高执行速度，推荐发送地址) 
	return 0;
}


//这个函数用于对一个结构体变量进行输入，所以一定要有形参 
//st是一个变量，stu也是一个变量，它们两个变量的类型也是一致的 
//stu是通过数据类型名 变量名进行分配的，所以它一定是静态的，这样无法对stu的值进行改写 
//这样写程序是不对的 ----本函数无法修改主函数 
//void InputStudent(struct Student stu)
void InputStudent(struct Student* pstu)
//pstu只占4个字节(一个指针变量,无论它指向的变量占几个字节,它本身只占4个字节,因为一个变量的地址只用它第一个字节的地址来表示) 
{
	//stu.age = 10;
	//strcpy(stu.name,"张三");   //不能写成stu.name="张三"  -----这个要后面讲字符串的处理才行 
	//stu.sex = 'F'; 
	(*pstu).age = 10;
	strcpy(pstu->name,"李四");
	pstu->sex = 'M';
}

//void OutputStudent(struct Student ss)
void OutputStudent(struct Student* pst)
//形参ss和st的值是不一样的,修改ss的值不会影响st,修改st不会影响ss,但是现在把st的值赋给ss了,现在它们一样了
//这个函数只输出不修改,我们可以发送st的地址也可以发送st的内容 (但是我们为了提高执行速度，推荐发送地址) 
{
	//printf("%d %c %s\n",ss.age,ss.sex,ss.name); 
	printf("%d %c %s\n",pst->age,pst->sex,pst->name); 
}
