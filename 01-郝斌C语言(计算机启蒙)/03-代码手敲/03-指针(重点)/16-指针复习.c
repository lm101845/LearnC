/**
	2021年12月25日 merry christmas 
*/

#include <stdio.h>

void f(int* pArr,int len)
{	
	pArr[2] = 10;
	//我这里写的 pArr[2]和下面的a[2]是一个东西——因为你把a发送给pArr了，此时a和pArr的值就一样了
	// pArr[2] === a[2] ===  *(pArr + 2) === *(a+2) 
}
 
void outArr(int* pArr,int len) 
{
	int i;
	for(i = 0; i < len; i++)
		printf("%d\n",pArr[i]); 
} 
int main(void)
{
	int a[5] = {1,2,3,4,5};
	printf("%#X,%#X\n",a,&a[0]); 
	//a和&a[0]它们连个是一模一样的 
	
	//a = &a[2];    //error 因为a是个常量(指针常量)，是不能改变的 
	//a首先是个指针，存放的是第一个元素的地址
	//其次，a是一个常量，既然是一个常量，a的值就是不能改变的(不能把a放到等号的左边)
	//如果p是个指针变量(不管它是什么类型的指针变量)，p[i] 永远等价于*(p+i) 
	
	f(a,5);
	//函数f要对数组进行处理，要发送2个数据 
	printf("%d\n",a[2]); 
	
	outArr(a,5);
	//利用指针，我们就可以在另一个函数里面访问主调函数main里面的一些变量了  
} 
