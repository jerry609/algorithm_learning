//
// Created by aDMIN on 2024/7/1.
//
#include<cstdio>
#include <iostream>
#include <ostream>
#include<string>
using namespace std;

int main() {
    string str1 = "abc";
    string str2 = "xyz", str3;
    str3 = str1 + str2;
    str1 += str2;
    cout << str1 << endl;
    cout << str3 << endl;


    string s1 = "aa";
    string s2 = "aaa";
    string s3 = "abc";
    string s4 = "xyz";
    if(str1<str2) printf("ok1 \n");
    printf("%s \n",(s1>s2?s1:s2).c_str());
    string result = s1 > s2 ? "s1" : "s2";
    cout << result;
    return 0;
}
