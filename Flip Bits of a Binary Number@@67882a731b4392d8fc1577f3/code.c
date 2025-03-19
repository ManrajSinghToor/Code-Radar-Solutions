// Your code here...
#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);

    // Flip all bits using the bitwise NOT operator (~)
    unsigned int flipped_number = ~number;

    // Mask the flipped number to ensure correct handling within the size of the unsigned integer
    flipped_number = flipped_number & ((1U << (sizeof(number) * 8)) - 1);

    printf("%u\n",flipped_number);

    return 0;
}

