//
// Created by aDMIN on 2024/7/4.
//
#include <cstdio>
const int maxn = 210;
int a[maxn];

int main() {
    int n, x;
    // while (scanf("%d",&n)!=EOF) {
    //
    // }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%n", &a[i]);
    }
    scanf("%d", &x);
    int k = 0;
    for (k; k < n; k++) {
        if (a[k] == x) {
            printf("%d\n", k);
            break;
        }
    }
    if (k == n) {
        printf("-1\n");
    }
    return 0;
}
