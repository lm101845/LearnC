/**
 * @Author liming
 * @Date 2025/1/1 10:20
 */

#include <stdio.h>

int main(void) {
    int i = 0,total = 0;
    for(i = 1; i <= 100;i++){
        total += i;
    }
    printf("total=%d\n",total);
    return 0;
}
