//2023年2月1日14:06:42

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void populate_array(int* array, size_t arraySize, int (*getNextValue)(void))
//size_t 类型定义在cstddef头文件中，该文件是C标准库的头文件stddef.h的C++版。
//它是一个与机器相关的unsigned类型，其大小足以保证存储内存中对象的大小。

/**
 实例中 populate_array() 函数定义了三个参数，其中第三个参数是函数的指针，
 通过该函数来设置数组的值。

 实例中我们定义了回调函数 getNextRandomValue()，它返回一个随机值，
 它作为一个函数指针传递给 populate_array() 函数。

 populate_array() 将调用 10 次回调函数，并将回调函数的返回值赋值给数组。
*/
{
    for (size_t i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}

// 获取随机值
int getNextRandomValue(void)
{
    return rand();
}

int main()
{
    int myarray[10];
    /* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
    populate_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}
