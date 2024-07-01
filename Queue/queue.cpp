//
// Created by aDMIN on 2024/7/1.
//
#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    // 向队列中添加元素
    q.push(10);
    q.push(20);
    q.push(30);

    // 显示队列前端和尾端的元素
    std::cout << "Front: " << q.front() << std::endl;  // 输出 10
    std::cout << "Back: " << q.back() << std::endl;    // 输出 30

    // 出队
    q.pop();
    std::cout << "Front after one pop: " << q.front() << std::endl;  // 输出 20

    // 检查队列大小
    std::cout << "Size of queue: " << q.size() << std::endl;  // 输出 2

    // 检查队列是否为空
    if (!q.empty()) {
        std::cout << "Queue is not empty." << std::endl;
    }

    return 0;
}
