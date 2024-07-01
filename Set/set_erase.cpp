//
// Created by aDMIN on 2024/7/1.
//
#include<cstdio>
#include<set>
using namespace std;

int main() {
    //删除一个元素
    set<int> st;
    st.insert(100);
    st.insert(300);
    st.insert(200);
    st.insert(100);
    st.erase(st.find(100));
    st.erase(st.find(300));
    for (set<int>::iterator it = st.begin();it!=st.end();it++) {
        printf("%d",*it);
    }
    printf("\n");
    //删除一个区间的元素
    set<int> st2;
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(50);
    set<int>::iterator it = st.find(30);
    //因为set是有序容器，所以30以后的全被删除了
    st.erase(it,st.end());
    for (set<int>::iterator t=st.begin();t!=st.end();t++) {
        printf("%d \n",*t);
    }
    return 0;
}