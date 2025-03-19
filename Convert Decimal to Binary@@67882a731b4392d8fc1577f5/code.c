// Your code here...
#include <stdio.h>

void convertToBinary(unsigned int number) {
    int total_bits = sizeof(number) * 8; // Total bits in the integer

    // Print binary representation
    for (int i = total_bits - 1; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
}

int main() {
    unsigned int number;
    scanf("%u", &number);

    printf("%u",number);
    convertToBinary(number);
    printf("\n");

    return 0;
}

