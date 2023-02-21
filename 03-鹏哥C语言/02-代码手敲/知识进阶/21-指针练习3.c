//2023年2月21日11:09:10

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char* a[] = { "work","at","alibaba" };  //指针数组，数组每个元素都是指针
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	system("pause");
//	return EXIT_SUCCESS;
//}

//c语言中% c格式符表示输出的是字符 ，% s格式符表示输出的是字符串。

int main()
{
	//https://blog.csdn.net/SickAgaric/article/details/90486492
	//首先char* c[] 是一个指针数组，他里面存放的指针，每个指针都会指向一个字符串
	//charcp[] 同样也是指针数组，它里面存放的指针，会指向数组c[]
	//char** cpp 是一个三级指针，它指向的是数组cp
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);   //POINT
	printf("%s\n", *-- * ++cpp + 3);  //ER
	printf("%s\n", *cpp[-2] + 3);  //ST
	printf("%s\n", cpp[-1][-1] + 1);  //EW  相当于*(*(cpp-1)) + 1
	system("pause");
	return EXIT_SUCCESS;
}

//char* c[] = { "ENTER","NEW","POINT","FIRST" };
//把这4个字符串首数组的地址放到c数组里面去了，每个元素都是char*
//char** cp[] = { c + 3,c + 2,c + 1,c };
//把c数组的元素地址放到cp数组里面去了，每个元素都是char**
//char*** cpp = cp;
//把cp数组的元素地址放到cpp里面去了，cpp是char***

//printf("%s\n", **++cpp);   //POINT
//先++cpp，指向cp[1]，也就是c[2]，然后**cpp，取出c[2]的值，也就是POINT

//printf("%s\n", *-- * ++cpp + 3);  //ER
//先++cpp，指向cp[1]，也就是c[2]，然后*--*cpp，取出c[1]的值，也就是NEW，然后+3，取出NEW的第3个字符，也就是ER

//printf("%s\n", *cpp[-2] + 3);  //ST
//cpp[-2]，指向cp[-2]，也就是c[0]，然后*cpp[-2]，取出c[0]的值，也就是ENTER，然后+3，取出ENTER的第3个字符，也就是ST

//printf("%s\n", cpp[-1][-1] + 1);  //EW
//cpp[-1]，指向cp[-1]，也就是c[-1]，然后cpp[-1][-1]，取出c[-1]的值，也就是FIRST，然后+1，取出FIRST的第1个字符，也就是EW
