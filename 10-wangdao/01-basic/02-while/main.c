/**
 * @Author liming
 * @Date 2025/1/1 10:15
 */

#include <stdio.h>
//计算从1到100的和
int main(void) {
    int i = 1;
    int total = 0;
    while(i <= 100){  //在这里加分号会出错，因为while后面跟的是一个表达式
        total = total + i;
        i++;
    }
    printf("total=%d\n",total);
    return 0;
}
