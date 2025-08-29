#include <stdio.h>

int senpaiMagic(const int *a, int n, int target, int *loop) {
    *loop = 0;
    if (n <= 0) return -1;
    int L = 0, R = n - 1;
    while (L <= R) {
        (*loop)++;
        int m = L + (R - L) / 2;
        if (a[m] == target) return m;
        if (a[m] < target)   L = m + 1;
        else                 R = m - 1;
    }
    return -1;
}

int main(void){
    int n; 
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    if (n < 0) return 0;
    int a[n];                      

    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int target; if (scanf("%d", &target) != 1) return 0;

    int loops, idx = senpaiMagic(a, n, target, &loops);
    if (idx >= 0) printf("Present - %d", loops);
    else          printf("Absent");
    return 0;
}