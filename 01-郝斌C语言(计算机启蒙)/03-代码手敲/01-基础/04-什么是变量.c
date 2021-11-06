/*
 * @Author: liming
 * @Date: 2021-07-17 16:48:21
 * @LastEditTime: 2021-07-17 16:49:23
 * @FilePath: \day01\04-什么是变量.c
 */
#include<stdio.h>

int main(void){
    int i;
    i = 3; //3最终是存放在内存中，程序终止之后3所占的空间被释放掉
    printf("i = %d\n", i);
    return 0;
}