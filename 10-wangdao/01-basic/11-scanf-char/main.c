/**
 * @Author liming
 * @Date 2025/1/2 22:04
 */

#include <stdio.h>
//scanf读取字符串
int main() {
    char c[10];
//    scanf("%s", c);
    //这里不需要&c,因为数组名本身就是地址
    //scanf的%s会忽略中间的空格，如何你中间输入了空格，则会截断字符串，后面的字符不会被读取
//    printf("%s\n", c);
    char e[10];
    char f[10];
    scanf("%s%s",e,f);
    printf("c=%s,d=%s\n",e,f);
    return 0;
}
