//
// Created by aDMIN on 2024/7/1.
//
#include<cstdio>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 5; i <= 9; i++) {
        v.push_back(i);
    }
    //删除8,删除单个元素
    v.erase(v.begin() + 3);
    for (int i = 0; i < v.size(); i++) {
        printf("%d \n", v[i]);
    }
    //删除区间内的元素，[first,last),last要比要删的最后一个元素多1位
    int last = v.size();
    v.erase(v.begin(), v.begin() + last);
    printf("%d", v.size());
    return 0;
} //
// Created by aDMIN on 2024/7/1.
//
