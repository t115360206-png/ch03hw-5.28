#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 利用 ASCII 碼運算轉換大小寫
char changeCase(char c) {
    if (c >= 'A' && c <= 'Z') return c + ('a' - 'A'); // 或 c + 32
    if (c >= 'a' && c <= 'z') return c - ('a' - 'A'); // 或 c - 32
    return c;
}

int main(void) {
    char input;
    printf("請輸入一個英文字母: ");
    scanf(" %c", &input);

    printf("轉換結果: %c\n", changeCase(input));
    return 0;
}