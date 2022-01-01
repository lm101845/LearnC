/**
	2022年1月1日 
*/


/**
	动态内存的4个特点:
		1.它的长度不需要事先指定
		2.它的内存可以由程序员手动的分配,手动的释放
		3.它的空间可以在程序运行过程中动态的增加和缩小
		4.动态内存可以跨函数使用(本例没有体现出来) 
*/
#include<stdio.h>
#include <malloc.h>

int main(void)
{
	int a[5];  
	//如果int占4个字节的话，则本数组总共有20个字节,每4个字节被当作了一个int变量来使用
	//造出20个字节的静态写法 
	
	int len;
	int* pArr;
	int i;
	printf("请输入您要存放的元素的个数:");
	scanf("%d\n",&len); 
	
	pArr = (int*)malloc(sizeof(4*len));
	//pArr存的是第一个字节的地址,指向的是前4个字节  
	//造出20个字节的动态写法 
	//这种写法就【等价于】   int pArr[len] ,不过这个是动态构造的。 
	
	//总结:所有的下标都可以转换为指针,即pArr[2] === *(pArr+2)
	
	//对一维数组进行操作
	//如:对动态一维数组进行赋值
	for( i = 0; i < len; i++)
	{
		scanf("%d",&pArr[i]);	
	} 
	
	//对一维数组进行输出 
	printf("一维数组的内容是:\n");
	for( i = 0; i < len; i++)
	{
		printf("%d\n",pArr[i]);
	}
	
	free(pArr);   //释放掉动态分配的数组 
	return 0;	
}
