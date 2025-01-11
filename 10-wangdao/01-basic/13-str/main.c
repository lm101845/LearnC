/**
 * @Author liming
 * @Date 2025/1/4 17:50
 */

#include <stdio.h>
#include <string.h>

int myStrlen(char c[]) {
    int i = 0;
    while(c[i]){   //找到结束符后，循环结束，从而得出字符串的长度
        i++;
    }
    return i;
}

int main() {
    int len;
    char c[20];
    char d[100] = "world";
    char e[100];
    gets(c);
    puts(c);
    len = strlen(c);  //统计字符串的长度
    printf("len=%d\n", len);
    len = myStrlen(c);
    printf("my-len=%d\n", len);
    strcat(c, d);  //将两个字符串连接  d中的字符串接到c的后面
    puts(c);
    strcpy(e, c);  //将d中的字符串复制到c中
    puts(e);
    printf("c?e=%d\n", strcmp(c, e));  //比较两个字符串的大小
    printf("c?how=%d\n", strcmp(c, "how"));  //比较两个字符串的大小
    return 0;
}
