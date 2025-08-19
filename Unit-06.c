#include <stdio.h>

int ack(int i, int o) {
    if (i == 0)
        return o + 1;
    else if (i > 0 && o == 0)
        return ack(i - 1, 1);
    else
        return ack(i - 1, ack(i, o - 1));
}

int main() {
    int result = ack(1, 1);
    printf("%d", result);
    return 0;
}