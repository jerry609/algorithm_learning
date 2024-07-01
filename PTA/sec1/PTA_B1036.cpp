//
// Created by aDMIN on 2024/7/4.
//
#include<iostream>

int main() {
    int a, row = 0;
    char c;
    scanf("%d %c", &a, &c);
    if (a % 2 == 0)
        row = a / 2;
    else
        row = a / 2 + 1;
    for (int i = 0; i < a; i++) {
        printf("%c", c);
    }
    printf("\n");
    for (int i = 1; i < row - 1; i++) {
        printf("%c", c);
        for (int j = 1; j < a - 1; j++) {
            printf(" ");
        }
        printf("%c\n", c);
    }
    for (int i = 0; i < a; i++) {
        printf("%c", c);
    }
    return 0;
}
