//
// Created by aDMIN on 2024/7/1.
//
#include<cstdio>
#include<set>
using namespace std;

int main() {
    set<int> st;
    for(int i = 0;i<4;i++) st.insert(i);
    set<int>::iterator it = st.find(2);
    printf("%d \n",*it);
    printf("%d \n",*(st.find(2)));

    return 0;
}