//
// Created by aDMIN on 2024/7/1.
//
#include<iostream>
#include<map>
using namespace std;

int main() {
    pair<string, int> p;
    map<string, int> mp;
    p.first = "hahaha";
    p.second = 5;
    cout << p.first << " " << p.second << endl;
    p = make_pair("xixi", 55);
    cout << p.first << " " << p.second << endl;

    mp.insert(make_pair("heihei", 66));
    mp.insert(pair<string, int>("haha", 33));
    for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
