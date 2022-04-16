//2022年4月16日
/*
	char     		//字符数据类型
	short    		//短整型
	int     			//整形
	long     		//长整型
	long long  		//更长的整形
	float    		//单精度浮点数
	double    		//双精度浮点数
	//C语言有没有字符串类型？
*/
#include <stdio.h>
int main()
{
	printf("%d\n", sizeof(char));		  //1

	printf("%d\n", sizeof(short));        //2
	printf("%d\n", sizeof(int));		  //4
	printf("%d\n", sizeof(long));		  //4
	printf("%d\n", sizeof(long long));	  //8

	printf("%d\n", sizeof(float));		  //4
	printf("%d\n", sizeof(double));		  //8
	printf("%d\n", sizeof(long double));  //8
	//sizeof的单位是字节！！！Byte
	//光是整型就搞出了4种：short int long long
	//C语言标准只规定了sizeof(long)>= sizeof(int),实际中大家 让他们相等
	//类型就是用来创建变量的
	return 0;
}