//
// Created by aDMIN on 2024/7/1.
//
#include<iostream>
#include<string>
using namespace std;

int main() {
    //insert(pos,string)在pos位置插入string
    string str = "abcxyz", str2 = "opq";
    str.insert(3, str2);
    cout << str << endl;
    //insert(it,it2,it3),it2,it3为待插字符串的首尾迭代器,用来表示字符串[it2,it3)将被插到it的位置上
    string s = "123";
    string s1 = "456";
    s.insert(s.begin()+1,s1.begin(),s1.end());
    cout<<s<<endl;
    return 0;
}
