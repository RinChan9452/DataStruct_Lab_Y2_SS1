#include <stdio.h>

int re(int n) {
    if (n == 1) {
        return 2; 
    }
    return re(n - 1) + 3; 
}

int main() {
    int n = 5; 
    printf("a(%d) = %d\n", n, re(n));
    return 0;
}