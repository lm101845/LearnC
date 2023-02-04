//2022年12月10日20:09:41

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int a = 10;   
//	//a占4个字节的空间
//	//&a的时候，拿到的是4个字节中第一个字节的地址(为了方便)
//	int* pa = &a;
//	printf("%d\n", *pa);
//	//pa是存放地址的，我们把存放地址的变量叫指针变量
//	//为了和其他变量区分开，为了展示它的高贵身份，给这个变量前面加上*
//	//指针的大小在32位平台是4个字节，在64位平台是8个字节。
//
//
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof(pa));  //4
//	printf("%d\n", sizeof(pc));  //4
//	printf("%d\n", sizeof(pf));  //4
//	//问：既然不同类型的指针大小都是4个字节(32位机器下)，那为什么要搞这么多不同的类型呢？
//	//是否可以弄一个通用的指针类型呢？
//	//答：指针类型是有意义的，具体见下面：
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	int a = 0X11223344;
//	//一个16进制位表示4个2进制位
//	//原因：16进制最大是f,也就是15，一个f表示成2进制位，最少需要4个二进制,即1111
//	//int是4个字节(32bit)，而这里的16进制一个数占4个bit,则8个数占32个bit，即4个字节，刚好满足int类型
//	//int* pa = &a;
//	//*pa = 0;
//
//	//char* pc = &a;
//	//*pc = 0;
//	// 错误写法！！！！
//	// 
//	//既然所有指针变量大小都是一样的，那我用char来存是否可以呢？——不可以！！！
//	//使用指针类型为int*，解引用的时候它可以访问4个字节，而为char*时，解引用它只能访问到一个字节
//	//指针类型的不同，能够访问到的权限也就不同
//	//即：指针类型是有意义的
//	/**
//	 * 总结：指针类型的意义
//	 * 1.指针类型决定了：指针解引用的权限有多大(地址+类型决定了获取内存的大小)
//	 * 2.
//	 */
//	system("pause");
//	return EXIT_SUCCESS;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);			//009CFDF8
//	printf("%p\n", p+1);		//009CFDFC	p+1表示跨了一步，int*类型，一步是4个字节
//	printf("%p\n", pc);			//009CFDF8
//	printf("%p\n", pc + 1);		//009CFDF9 pc+1表示跨了一步，char*类型，一步是1个字节
//	/**
//	*warning C4133: “初始化”: 从“int *”到“char *”的类型不兼容
//	*指针类型决定了走一步，能走多远(步长)
//	*/
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}


//int main()
//{
//	system("pause");
//	return EXIT_SUCCESS;
//}

