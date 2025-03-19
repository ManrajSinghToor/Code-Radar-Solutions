#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);

    // Get the MSB
    unsigned int msb = (number >> (sizeof(number) * 8 - 1)) & 1;

    if (msb == 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}

