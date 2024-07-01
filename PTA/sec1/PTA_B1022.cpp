//
// Created by aDMIN on 2024/7/4.
//
//
#include<iostream>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum =a +b;
    int ans[31],num= 0;
    do {
        ans[num++] = sum%c;
        //ans[num] = sum%c;num++;
        sum /= c;
    }while (sum!=0);
    for (int i = num-1;i>=0;i--) {
        printf("%d",ans[i]);
    }
    return 0;
}