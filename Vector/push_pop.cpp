//
// Created by aDMIN on 2024/6/19.
//
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    vector<int> vi;
    for (int i = 0; i <= 5; i++) {
        vi.push_back(i);
    }
    printf("%d \n", vi.size());

    //在 for 循环中，你在迭代过程中改变了向量的大小。
    //pop_back() 会改变向量的容量和大小，这使得原来的迭代器可能会变得无效。
    //在这种情况下，继续使用原迭代器可能会引起程序崩溃或不正确的行为。
    printf("wrong situation: \n");
    for (vector<int>::iterator it = vi.begin(); it != vi.end(); it++) {
        printf("%d \n", vi.size());
        vi.pop_back();
    }
    printf("correct way: \n");
    while (!vi.empty()) {
        printf("%d \n", vi.size());
        vi.pop_back(); // 移除最后一个元素
    }
    return 0;
}
