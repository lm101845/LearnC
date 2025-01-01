/**
 * @Author liming
 * @Date 2025/1/1 11:45
 */
//计算n!的值
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    printf("result is %d\n", result);
    return 0;
}
