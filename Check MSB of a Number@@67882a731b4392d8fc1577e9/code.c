#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int msb = num & (1 << (sizeof(int) * 8 - 1));

    if (msb) {
        printf("Set");
    } else {
        printf("Not set");
    }

    return 0;
}