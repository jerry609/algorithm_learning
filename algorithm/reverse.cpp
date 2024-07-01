//
// Created by aDMIN on 2024/7/1.
//
#include <algorithm>
#include<cstdio>
#include<iostream>
using namespace std;

int main() {
    int a[10] = {10, 11, 12, 13, 14};
    //反转[it,it2)之间的元素
    reverse(a, a + 4);
    for (int i = 0; i < 5; i++) printf("%d \n", a[i]);

    string s = "abcdefghij";
    reverse(s.begin()+2,s.begin()+4);
    for (int i = 0;i<s.length();i++) {
        printf("%c",s[i]);
    }
    return 0;
}
