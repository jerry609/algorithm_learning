//
// Created by aDMIN on 2024/7/1.
//
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    //定义vector
    vector<int> vi;
    //定义iterator
    vector<int>::iterator it;
    //访问容器内元素
    for (int i = 1; i <= 5; i++) {
        vi.push_back(i);
    }
    it = vi.begin();
    //vi[i]和*(vi.begin()+i)等价
    //只有在vector和string容器中才可以使用迭代器+1的写法
    for (int i = 0; i < 5; i++) {
        printf("%d \n", *(it + i)); //输出vi[i]
    }
    printf("Second situation:\n");
    //begin是首元素地址，end是尾元素后面一个元素的地址
    //for循环的第二个表达式是跳出条件
    for (vector<int>::iterator it = vi.begin(); it != vi.end(); it++) {
        printf("%d \n", *it);
    }
    return 0;
}
