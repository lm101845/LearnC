/**
 * @Author liming
 * @Date 2025/1/1 10:30
 */

#include <stdio.h>

int main(void) {
    int i ,j;
    for(i = 1; i < 6; i++){  //外层循环控制行数
        for(j = 0; j < i; j++){  //内层循环控制每一行中每一列显示什么
            printf("*");
        }
        printf("\n");  //每打印完一行，换行
    }
    printf("\n");
    return 0;
}
