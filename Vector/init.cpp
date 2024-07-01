//
// Created by aDMIN on 2024/7/1.
//
#include<cstdio>
#include<vector>
using namespace std;

int main() {
    vector<int> vi;
    vector<int> vi2[10];
    vector<int> vi3(10); // 初始化为包含10个元素，每个元素都是0
    vector<int> vi4(10, 5); // 初始化为包含10个元素，每个元素都是5
    vector<int> vi5{1, 2, 3, 4, 5}; // 使用初始化列表

    for (int i = 0; i <= 5; i++) {
        vi.push_back(i);
    }
    for (int i = 0; i <= 5; i++) {
        vi2[i] = vector<int>(10, i);
    }

    // 迭代每个vector<int>中的元素
    for (int i = 0; i <= 5; i++) {
        for (vector<int>::iterator it = vi2[i].begin(); it != vi2[i].end(); it++) {
            // 对每个元素进行操作，比如打印
            printf("%d ", *it);
        }
        printf("\n");
    }
    return 0;
}
