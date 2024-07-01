//
// Created by aDMIN on 2024/7/2.
//
#include<cstdio>
#include<queue>
#include<iostream>
using namespace std;

int main() {
    queue<int> q;
    for (int i = 0; i <= 5; i++) {
        q.push(i);
    }
    for (int i =0 ; i<3;i++) q.pop();

    printf("%d %d", q.front(), q.back());

    queue<int> q2;
    if (q2.empty()==true) printf("empty \n");
    else printf("not empty\n");
    q2.push(1);
    cout << "Queue is empty: " << (q2.empty() ? "Yes" : "No");
}
