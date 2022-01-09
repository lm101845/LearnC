/*************************************************************************************
 * 文 件 名:  01-数据类型_浮点型.c
 * 创 建 者：  liming
 * 创建时间：  2022/01/09 16:53
*************************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//浮点型常量
void test01()
{
	printf_s("sizeof 3.14 = %d\n", sizeof(3.14));
	//默认将一个小数认为是double类型 8个字节

	printf_s("sizeof 3.14 = %d\n", sizeof(3.14f));
}

//浮点型变量如何表示
void test02()
{
	//int a = 10;
	float a = 3.14f;
	printf_s("a=%f\n", a);
	//float类型的变量记得用%f
	//printf输出小数的时候，默认保留6位小数位

	printf_s("a=%.2f\n", a);
	//.2f表示保留2位小数

	double b = 3.1415;
	printf_s("b=%lf\n", b);
	//double类型的变量记得用%lf

	printf_s("b=%.3lf\n", b);
	//保留3位小数，最后一位会四舍五入

	//float和double的区别
	float PI = 3.14159265358;
	printf_s("PI = %f\n", PI);   //PI=3.141593
	printf("PI=%.20f\n", PI);   //PI=3.14159274101257324219，和我的预期不一样   float最多精确7位有效数字 3.141592，后面的就瞎输出了

	double PI2 = 3.14159265358123456789;
	printf_s("PI2 = %lf\n", PI2);   //PI2=3.141593
	printf("PI2=%.20lf\n", PI2);   //PI2=3.14159265358123462875，和我的预期不一样   double最多精确16位有效数字 3.141592653581234，后面的就瞎输出了
}

void test03()
{
	//科学计数法
	float f1 = 3e2;  //3*10^2 
	printf("f1=%.10f\n", f1);

	float f2 = 3e-2;  //3*10^-2     //f1=300.0000000000
	printf("f2=%.10f\n", f2);		//f2=0.0299999993   
	printf("f2=%f\n", f2);			//f2=0.030000
}
int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}
