/**
 * @Author liming
 * @Date 2025/1/11 11:14
 */

#include <stdio.h>
//指针与一维数组的传递
//数组名作为实参传递给子函数时，是弱化为指针的
void change(char *d){   //写成char d[]也行，等价的
    *d = 'H';
    d[1] = 'E';
    *(d+2) = 'L';
}

int main() {
    char c[10] = "hello";
    change(c);   //传递的是一个数组的初始地址
    puts(c);
    return 0;
}
