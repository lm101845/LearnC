/**
 * @Author liming
 * @Date 2025/1/4 18:28
 */
//题目：读取一个字符串，字符串可能含有空格，将字符串逆转，原来的字符串与逆转后的字符串相同，输出0，
//原字符串小于逆转后的字符串，输出-1，原字符串大于逆转后的字符串，输出1。
#include <stdio.h>
#include <string.h>

int main() {
    //首先要读取字符串
    char c[100];   //原字符串
    char d[100] = {0};   //逆转后的字符串,开始就对d进行初始化，可以有\0
    gets(c);  //读取原字符串
    int i, j;  //i从0开始，j从字符串长度-1开始
    for (i = 0, j = strlen(c) - 1; i < strlen(c); i++, j--) {
        d[j] = c[i];
    }
//    puts(d);
    int result = strcmp(c, d);
    printf("%d\n", result);
    return 0;
}
