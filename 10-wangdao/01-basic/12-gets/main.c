/**
 * @Author liming
 * @Date 2025/1/4 17:44
 */

#include <stdio.h>

int main() {
    char c[20];
    gets(c);
    //gets中放入字符数组的数组名即可
    //gets特点：一次读一行，直到遇到换行符为止
//    printf("%s\n", c);
    puts(c);
    //puts等价于printf("%s\n", c);
    return 0;

}
