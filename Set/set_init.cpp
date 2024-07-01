//
// Created by aDMIN on 2024/7/1.
//
#include<cstdio>
#include<set>
#include <vector>
using namespace std;

int main() {
    set<int> s1 = {1, 4, 3, 4, 5};
    vector<int> v = {6, 5, 4, 3, 2, 5};
    set<int> s2(v.begin(), v.end());

    set<int> st;
    st.insert(3);
    st.insert(5);
    st.insert(2);
    st.insert(3);
    for(set<int>::iterator it = st.begin();it!=st.end();it++) {
        //输出结果已经排好序了，并且除去了重复元素
        printf("%d \n",*it);
    }
    return 0;
}
