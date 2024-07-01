#include <iostream>
#include <string> // 引入字符串相关的标准库

// 使用标准命名空间
using namespace std;

int main() {
    // 初始化一个字符串
    string str = "Hello, world!";
    string to_find = "world"; // 定义要查找的子字符串

    // 查找子字符串在主字符串中的位置
    size_t pos = str.find(to_find);
    if (pos != string::npos) { // 检查是否找到
        cout << "Found at position: " << pos << endl;
    } else {
        cout << "Not found!" << endl;
    }

    // 再次操作，使用一个新字符串
    string str1 = "Hello, world!";
    size_t pos1 = str1.find("world");

    if (pos1 != string::npos) {
        // 如果找到，使用迭代器指定替换的起始和结束位置
        string::iterator st = str1.begin() + pos1;
        string::iterator ed = str1.begin() + pos1 + string("world").length();

        // 替换找到的子字符串为 "there"
        str1.replace(st, ed, "there");
    }

    cout << str1 << endl; // 输出: "Hello, there!"

    // // 对str1进行重新赋值以进行另一个示例
    // str1 = "Hello, world!";
    // // 设置另一对迭代器指定替换的位置
    // string::iterator start = str1.begin() + 7; // 位置从7开始
    // string::iterator end = str1.begin() + 12; // 位置在12结束
    //
    // // 这里应该是对 `str` 变量进行操作，而不是 `str1`
    // str.replace(start, end, "there");
    // cout << str << endl; // 由于错误，输出仍然是 "Hello, world!"，实际意图输出 "Hello, there!"

    return 0;
}
