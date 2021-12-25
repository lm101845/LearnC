/**
	2021年12月25日 merry christmas 
*/

#include <stdio.h>

void Show_Array(int* p,int len)
{
	int i = 0;
	//注：C语言不允许变量定义放在其他语句的下面，所以这里放到上面好一些。 
	for(i = 0; i < len; ++i)
	{
		printf("%d\n",p[i]);
	} 
	//这个函数希望把数组内容给遍历出来 
	//p[0] = -1; 
	// p[0]===*p,p[2]===*(p+2) === *(a+2) 
	//p[2] = 100;
	
	//p[i]就是主函数的a[i]====>只要把a发送给p，就会导致a[i]和p[i]是一模一样的了
	
	
		
}

int main(void) 
{
	int a[5] = {1,2,3,4,5};
	Show_Array(a,5);  
	//第一个参数a是数组第一个元素的地址，可以确定这个元素，5可以确定元素的个数 
	//a等价于&a[0],而&a[0]本身就是int* 类型 
	
	//你把a发送给p了，那p[0]就等价于*p, 
	//printf("%d\n",a[0]);   
	//这里a[0]的值有没有改变呢,是改变了的 
	
	//printf("%d\n",a[2]);
	return 0; 
} 
