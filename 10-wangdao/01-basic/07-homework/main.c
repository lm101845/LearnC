/**
 * @Author liming
 * @Date 2025/1/1 20:15
 */
//100元换成10元、5元、2元和1元的钞票，要求正好换40张，且每种票子至少一张，有多少种换法？
//思路：等价于82元换成10元、5元、2元和1元的钞票，正好换36张
//4层for循环，枚举四种钞票的数量
#include <stdio.h>

int main(void) {
    int count = 0;
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 20; ++j) {
            for (int k = 1; k <= 40; ++k) {
                for (int l = 1; l <= 40; ++l) {
                    if (i * 10 + j * 5 + k * 2 + l == 100 && i + j + k + l == 40) {
                        count++;
                        printf("10元%d张，5元%d张，2元%d张，1元%d张\n", i, j, k, l);
                    }
                }
            }
        }
    }
    printf("共有%d种换法\n", count);
    return 0;
}
