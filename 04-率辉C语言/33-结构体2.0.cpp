/**
	2022年4月4日 
*/
#include <iostream> 

//用结构体来表示一个点

int main()
{
//	struct {int x; int y;} point;
//  point这个变量类型太长了,我们可以使用typedef来给这个类型重新起一个名字 
//	typedef struct {int x; int y;} Point;     //这样写成一行格式不清晰 
	//给结构体struct {int x; int y;}重新起一个名字叫做Point
	//我们平常会把换名字的操作写在main函数的外面，让它成为一个全局变量
	//并且我们的格式一般不写成一行，这样会清晰很多
	typedef  struct 
	{
		int x;
		int y;	
	} Point;
	Point point;
	//point的变量类型就叫做Point了 
	point.x = 10;
	point.y = 11;
	//结构体内部的变量x,y我们叫做分量 
	printf("%d,%d",point.x,point.y);
	return 0;
} 
