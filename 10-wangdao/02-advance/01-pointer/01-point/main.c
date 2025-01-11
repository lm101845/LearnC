/**
 * @Author liming
 * @Date 2025/1/5 10:33
 */

#include <stdio.h>

int main() {
    int i = 5;
    char c = 'a';
    int *i_pointer = &i;  //定义一个指针变量并初始化
    char *c_pointer;
    c_pointer = &c;
    *i_pointer = 10;   //间接访问(指针的本质  )
    printf("i=%d\n",i);
    return 0;
}
