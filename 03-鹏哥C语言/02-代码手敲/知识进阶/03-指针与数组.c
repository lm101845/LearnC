//2022年12月24日10:00:55

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	//数组名是数组首元素的首地址
//	printf("%p\n", &arr[0]);
//	//这2个打印出来的地址是一样的
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p<==>%p\n", &arr[i], p + i);
//		//相等，p+i产生的就是下标为i的元素的地址
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}

int main()
{
	int arr[10] = { 1,20,30,4,5,6,7,8,9,10 };
	int* p = arr;
	printf("%d\n", 2[arr]);  //30
	printf("%d\n", arr[2]);  //30
	printf("%d\n", p[2]);    //30  
	//这里p和arr是等价的！！！p[2]也可以转换为*(p+2)
	//[]两端，一个(左边)是首元素地址，另一个(右边)是整数，就能成功访问到！！
	printf("%d\n", 2[p]);    //30  

	//arr[2]<==>*(p+2) <==>*(2+p)<==>*(2+arr)<==>*(arr+2)<==>2[arr]<==>p[2]
	//2[arr] <==>*(2+arr)
	
	//[]是一个操作符，2和arr是2个操作符
	//arr[2]编译器最终会转换为*(arr+2计算)
	/**
	 C语言中，数组名是一个指向数组第一个元素的指针。因此，对于数组arr，
	 可以使用arr[i]来访问数组中的第i个元素，也可以使用*(arr+i)来访问数组中的第i个元素。
	 这种表示方法称为指针算术。

	 在C语言中，可以使用指针算术的反向写法，即i[arr]来访问数组中的第i个元素。
	 这种表示方法称为下标算术。下标算术和指针算术是等价的，因此2[arr]等价于*(arr+2)，
	 也就是arr[2]。

	 下标算术可以使代码更简洁，但是也容易让人产生误解。
	 例如，在下标算术中，数组名前面的数字是下标，而不是数组的长度。
	 因此，如果你想要打印数组的长度，应该使用sizeof运算符，而不是使用下标算术。
	 */
	printf("%d\n", 9[arr]);
	//9[arr]的意思是,在首元素的地址的基础上，连续跨9步，就变成了第10个元素了
	system("pause");
	return EXIT_SUCCESS;
}
