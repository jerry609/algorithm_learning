//
// Created by aDMIN on 2024/7/1.
//
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    // 替换从位置7开始的5个字符
    str.replace(7, 5, "there");
    std::cout << str << std::endl;  // 输出: "Hello, there!"
    return 0;
}
