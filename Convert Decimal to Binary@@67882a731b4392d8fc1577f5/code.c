// Your code here...
#include <stdio.h>

void printBinary(int num) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);

    for (int i = 0; i < sizeof(int) * 8; i++) {
        putchar((num & mask) ? '1' : '0');
        mask >>= 1;
    }
    putchar('\n');
}

int main() {
    int number = 42;
    printf("Binary representation of %d: ", number);
    printBinary(number);

    return 0;
}
