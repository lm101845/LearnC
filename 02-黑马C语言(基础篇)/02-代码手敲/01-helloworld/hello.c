/*************************************************************************************
 * 文 件 名:   hello.c
 * 创 建 者：  liming
 * 创建时间：  2021/9/12 16:07
*************************************************************************************/

//该文件右键License Headers可以添加头部注释

//包含头文件
//include:包含  std:标准  i:input(输入——从键盘获取信息)  o:output(输出——向屏幕打印信息) h:header(头文件)
//连起来就是：包含一个输入，输出的头文件
//你写了这一行代码相当于写了730多行的代码
#include <stdio.h>  

//这个是stystem函数的额头文件 
#include <stdlib.h>  

//下面是一个main函数，可以向屏幕上输出helloworld
// int 函数的返回值类型
// main 程序的主函数(也叫入口函数)，有且仅有一个
//()参数类表，里面可以传入一些参数
//{}函数的实现体
//printf("hello world!!!\n"); 向屏幕上输出hello world
//return 0;返回正常的退出结果(0就是一个整数，int类型)
	
int main()
{
	//system("mspaint");  //打开画图
	//system("notepad");  //打开记事本
	//system("calc");  //打开计算器
	//system("control");  //打开控制面板
	//system("ping www.baidu.com");  //ping www.baidu.com
	system("pause");   //暂停，请按任意键继续,起到了一个阻塞的功能
	//注意：必须要先把打开的窗口先关闭掉才能打开另外的窗口
	printf("hello world!!!\n");
	system("pause");
	return 0;
} 