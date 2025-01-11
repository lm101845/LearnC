/**
 * @Author liming
 * @Date 2025/1/11 16:19
 */
//堆和栈的差异
#include <stdio.h>
#include <string.h>
#include "stdlib.h"
char * print_stack(){
    char c[100] = "I am print_stack func";
    char *p;
    p = c;
    puts(p);
    return p;
}

char * print_malloc(){
    char *q = (char*)malloc(100);  //堆空间在整个进程中一直有效，不因为函数结束而消亡
    strcpy(q,"I am print malloc func");
    puts(q);
    return q;
}
int main() {
    char *p;
    p = print_stack();   //栈空间被释放调了，p接到了个屁,解决方法见print_malloc函数
    puts(p);


    char*q;
    q = print_malloc();
    puts(q);   //此时可以接收到
    free(q);  //只有free的时候，堆空间内存才会释放
    return 0;
}
