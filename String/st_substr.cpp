//
// Created by aDMIN on 2024/7/1.
//
#include<iostream>
#include<string>
using namespace std;
int main() {
    //substr(pos,length),从pos开始到length结束
    string s = "thank you very much";
    cout<<s.substr(0,5)<<endl;
    cout<<s.substr(14,4)<<endl;
    return 0;
}