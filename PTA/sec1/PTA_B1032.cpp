#include <cstdio>
//
// Created by aDMIN on 2024/7/4.
//
#include<cstdio>
#include<map>
#include<iostream>
using namespace std;

const int maxn = 100010;
int school[maxn] = {0};

int main() {
    int n, sid, score;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &sid, &score);
        school[sid] += score;
    }
    int k = 1, max = -1;
    for (int i = 1; i <=n; i++) {
        if (school[i] > max) {
            max = school[i];
            k = i;
        }
    }
    printf("%d %d\n", k, max);

    map<int,int> mp;

    for (int i = 0;i<n;i++) {
        scanf("%d %d",&sid,&score);
        //cin<<sid<<score;
        mp[sid] += score;
    }


    for (const auto& entry : mp) { // 迭代map来找最高分和相应学校ID
        if (entry.second > max) {
            max = entry.second;
            k = entry.first;
        }
    }
    cout<<k<<max;

    return 0;
}
