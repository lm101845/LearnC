/**
 * @Author liming
 * @Date 2025/1/11 10:37
 */
//指针的偏移使用场景，也就是对指针进行加加减减
#include <stdio.h>

#define N 5

int main() {
    int a[N] = {1, 2, 3, 4, 5};
    //数组名内存储了数组的起始地址，a中存储的就是一个地址值，所以前面不需要加去地址&(编译器设计的)
    int *p;   //定义指针变量p
    p = a;
    int i;
    for (i = 0; i < N; i++) {
//        printf("%3d", a[i]);
        printf("%3d", *(p+i));   //与a[i]等价
    }
    printf("\n");
    return 0;
}
