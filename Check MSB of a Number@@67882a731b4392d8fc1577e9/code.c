#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int msb = num & (1 << (sizeof(int) * 8 - 1));

    if (msb) {
        printf("Set");
    } else {
        printf("Not set");
    }

    return 0;
}