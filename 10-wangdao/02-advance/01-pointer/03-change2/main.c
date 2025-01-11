/**
 * @Author liming
 * @Date 2025/1/11 10:24
 */

#include <stdio.h>
void change(int* j){  //等价于j = &i,依然是值传递，只是这时j是一个指针变量，存储的是实际i的地址
    *j = 5;
}
int main() {
    int i = 10;
    printf("before change i = %d\n",i);
    change(&i);
    printf("after change i = %d\n",i);
    return 0;
}
