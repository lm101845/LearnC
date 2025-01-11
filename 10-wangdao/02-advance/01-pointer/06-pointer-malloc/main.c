/**
 * @Author liming
 * @Date 2025/1/11 12:55
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size; //size代表我们要申请多大字节的空间
    char *p; //void*类型的指针不能偏移(即加减),因此不会定义无类型指针
    scanf("%d",&size);  //输入要申请的空间大小
//    p = malloc(size);
    //malloc返回的是一个void*类型的指针(无类型指针)的首地址——因为它不知道你用来申请这块内存存什么类型变量，所以你需要手动强制类型转换一下
    p = (char*)malloc(size);  //使用malloc像操作系统借内存
//    p[0] = 'H';
//    p[1] = 'E';
//    p[2] = 'L';
//    p[3] = 'L';
//    p[4] = 'O';
//    p[5] = '\0';
strcpy(p,"hello");
    //malloc返回的空间，可以像数组一样使用
    puts(p);  //puts函数的参数是指针
    free(p);  //用完就要还  释放申请的空间(堆里面)
    printf("free success\n");
    return 0;
}
