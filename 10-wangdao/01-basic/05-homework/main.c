/**
 * @Author liming
 * @Date 2025/1/1 11:13
 */

#include <stdio.h>

int main(void) {
    int a;
    int b = 0;
    scanf("%d", &a);
    int backup_a = a;   //备份a的值(要写在输入之后，否则备份的会是垃圾值)
    while (a) {
        int digit = a % 10;   //获取当前最低位的数字
        printf("a%10 value is %d\n", digit);
        b = b * 10 + digit;  //将该数字添加到 b 的末尾
        a = a / 10;  //去掉 a 的最低位
        printf("b value is %d\n", b);
    }
    if (backup_a == b) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    //判断b和backup_a是否相等
    printf("\n");
    return 0;
}
