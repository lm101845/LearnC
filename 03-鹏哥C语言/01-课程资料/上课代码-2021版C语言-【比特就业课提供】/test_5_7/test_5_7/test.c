#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//int a = 6 / 5;//0.6
//	//printf("%d\n", a);
//
//	//float a = 6 / 5;
//	//printf("%f\n", a);
//
//	float a = 6.0 / 5.0;
//	printf("%f\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 7 % 3;//
//	printf("%d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 2;
//	//把a的二进制位向左移动一位
//	int b = a << 1;
//
//	printf("b = %d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//
//	//把a的二进制位向右移动1位
//	int b = a >> 1;
//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = -1;
//	//把a的二进制位向右移动1位
//	int b = a >> 1;
//	//当前的右移操作符使用的：算术右移
//	printf("b = %d\n", b);
//
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//	int b = a << -5;//
//
//	return 0;
//}
//



//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//^  - 按（2进制）位异或
//	//对应的二进制位进行异或
//	//规则：相同为0，相异为1
//
//	int c = a ^ b;
//	printf("%d\n", c);
//
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//6
//
//
//	//  | - 按（2进制）位或
//	//int c = a | b;
//	//printf("%d\n", c);
//
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	
//	 
//	// 
//	//& -  按（2进制）位与
//	//int c = a & b;
//	//printf("c = %d\n", c);
//	//
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	//
//}


//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//交换
//	// 
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//
//	//printf("a = %d b = %d\n", a, b);
//	////数值太大会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("a = %d b = %d\n", a, b);
//
//	//int c = 0;//空瓶
//	//printf("a = %d b = %d\n", a, b);
//	//c = a;
//	//a = b;
//	//b = c;
//	//printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	//a ^ a = 0;
//	//0 ^ a = a;
//	//000
//	//011
//	//011
//	//
//	//011
//	//011
//	//000
//	return 0;
//}


////
//int main()
//{
//	int a = 13;
//	//00000000000000000000000000001101
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	//& >>
//
//	return 0;
//}
//
//int main()
//{
//	int a = 13;
//	//把a的二进制中的第5位置成1
//	a = a | (1 << 4);
//	printf("a = %d\n", a);//29
//	//把a的二进制中的第5位置成0
//	a = a & ~(1 << 4);
//	printf("a = %d\n", a);//13
//
//	//
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000
//	//00000000000000000000000000011101
//	// 	                          
//	//1<<4
//	//00000000000000000000000000000001
//
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111
//	//00000000000000000000000000010000
//	//00000000000000000000000000001101
//	//1<<4
//	return 0;
//}


//
//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;//1
//	a += 100;   //2
//	a = a >> 3;
//	a >>= 3;
//
//	return 0;
//
// 
//=  -- 赋值
//== -- 判断
//
//int main()
//{
//	int flag = 0;
//	printf("%d\n", !flag);//
//
//	//flag为真，打印hehe
//	//if (flag)
//	//{
//	//	printf("hehe\n");
//	//}
//	////flag为假,打印haha
//	//if (!flag)
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}

//单目操作符 - 只有一个操作数
//
//int main()
//{
//	int a = 10;
//	a = -a;
//	printf("%d\n", a);
//	return 0;
//}

//
//int  main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//
//	printf("%d\n", s);//
//
//	//int a = 10;
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//单位是字节
//	//printf("%d\n", sizeof(int [10]));//40 - int [10]是arr数组的类型
//
//
//	//printf("%d\n", sizeof(a));//计算a所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//	//sizeof是一个操作符，不是函数
//
//	return 0;
//}

//
//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	//~ 按位取反
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//	//
//	int b = ~a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a--);//10
//	printf("%d\n", a);//9
//
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，  先++，后使用
//
//	//int b = a--;//后置--，先使用，后--
//	//int b = --a;
//	//printf("%d\n", a);//
//	//printf("%d\n", b);//
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//& - 取地址操作符
//	int * pa = &a;//pa是用来存放地址的 - pa就是一个指针变量
//	*pa = 20;//* - 解引用操作符 - 间接访问操作符
//	printf("%d\n", a);//20
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//if (a == b)
//	//if(a != b)
//	//if(a>b)
//	//if(a < b)
//	if(a <= b)
//	{
//
//	}
//	return 0;
//}
// = 赋值 == 判断相等

//== 
//比较2个字符串相等 不能使用 == 
//

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//if (a && b)
//	if(a || b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;
//
//    i = a++ || ++b || d++;
//    printf("a = %d\nb = %d\nc = %d\nd =%d\n", a, b, c, d);
//
//    return 0;
//}
//
//
//
//
//
//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//
//	//三目操作符
//	b = (a > 5 ? 1 : -1);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式 - 要从做向右依次计算，但是整个表达式的结果是最后一个表达式的结果
//
//	int d = (c = 1, a = c + 3, b = a - 4, c += b);
//
//	        //c=10  a=8         b=4    
//	printf("%d\n", d);
//
//	return 0;
//}