/**
 * @Author liming
 * @Date 2025/1/5 10:46
 */

#include <stdio.h>

void change(int j) {   //j是形参
    j = 5;
}

int main() {
    int i = 10;
    printf("before change i = %d\n",i);
    change(i);  //C语言的调用是值传递，实参i赋值给形参j
    printf("after change i = %d\n",i);
    return 0;
}


