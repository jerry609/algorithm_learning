//
// Created by aDMIN on 2024/7/4.
//
//
#include<iostream>
using namespace std;


int main() {
    int n, cnt=0;
    cin >> n;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (n * 3 + 1) / 2;

        }
        cnt++;
    }
    cout<<cnt;
    return 0;
}
