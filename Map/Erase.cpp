//
// Created by aDMIN on 2024/6/19.
//
#include<cstdio>
#include <map>
using namespace std;

int main() {
// 删除单个元素
    map<char, int> mp;
    mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;
    // map<char,int>:: iterator it = mp.find('b');
    // mp.erase(it);
    // mp.erase('b');
    // mp['b'] = 4;
    for (map<char,int>:: iterator it = mp.begin(); it!=mp.end();it++ ) {
        printf("%c %d\n",it->first,it->second);
    }
    mp.erase('b');

    for(map<char,int>::iterator it = mp.begin();it != mp.end();it++) {
        printf("%c %d\n",it->first,it->second);
    }
    return 0;
}