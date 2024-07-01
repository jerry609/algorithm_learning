//
// Created by aDMIN on 2024/7/1.
//
#include<iostream>
#include<string>
using namespace std;
int main() {
    //erase(迭代器)
    //erase(first,last)，老规矩[first,last)
    //erase(pos,length)
    string s1 = "abcdefg";
    s1.erase(3,2);
    cout<<s1<<endl;
    return 0;
}