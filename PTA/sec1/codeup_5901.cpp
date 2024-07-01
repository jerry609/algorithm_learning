//
// Created by aDMIN on 2024/7/4.
//
#include<iostream>
#include<cstring>
const int maxn = 255;
bool judge(char str[]) {
    int a = 0, b = strlen(str) - 1;  // b 初始化为最后一个字符的索引
    while (a < b) {  // 循环直到 a 和 b 相遇或交错
        if (str[a] == str[b]) {
            a++;
            b--;
        } else {
            return false;  // 一旦发现字符不匹配，返回 false
        }
    }
    return true;  // 如果所有匹配检查都通过，则字符串是回文
}
int main() {
    char str[maxn];
    while (gets(str)) {
        bool flag = judge(str);
        if (flag==true) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}