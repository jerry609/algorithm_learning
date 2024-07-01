#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};

    // 在向量的末尾插入三个50
    vec.insert(vec.end(), 3, 50);

    // 打印结果
    for (int num: vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // 输出: 10 20 30 40 50 50 50

    std::vector<int> vec2 = {10, 20, 30, 40};
    std::vector<int> extra = {25, 35};

    // 在第三个位置前插入另一个向量的所有元素
    vec.insert(vec2.begin() + 2, extra.begin(), extra.end());

    // 打印结果
    for (int num: vec2) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // 输出: 10 20 25 35 30 40
    return 0;
}
