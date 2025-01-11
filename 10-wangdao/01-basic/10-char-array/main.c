/**
 * @Author liming
 * @Date 2025/1/2 21:27
 */

#include <stdio.h>

void print(char d[]){
    int i = 0;
//    while (d[i] != '\0') {
    while (d[i]) {
        printf("%c ", d[i]);
        ++i;
    }
    printf("\n");
}
int main() {
//    char c[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
//    char c[10] = "abcdefghij"; // 初始化字符数组，等同于上面的写法
//    for (int i = 0; i < sizeof(c) / sizeof(char); ++i) {
//        printf("%c ", c[i]);
//    }
//    char c[6] = "hello";   // 字符数组的长度为6，最后一个元素是'\0'，用来表示字符串的结束
//    printf("%s\n", c); // 直接打印字符数组，等同于上面的for循环

//    char d[5] = {'h', 'e', 'l', 'l','o'}; // 乱码 因为字符数组的长度为5，但是没有'\0'
    char d[6] = {'h', 'e', 'l', 'l','o'}; // 不乱码
//    printf("%s\n", d);  //这里会输出乱码，因为字符数组的长度为5，但是没有'\0'  hello狑煚P
    print(d);
    return 0;
}
