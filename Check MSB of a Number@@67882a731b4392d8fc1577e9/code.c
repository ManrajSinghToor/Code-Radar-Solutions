#include <stdio.h>
int main() {
    unsigned int num;
    int msb;

    // Getting user input
    printf("Enter an integer: ");
    scanf("%u", &num);

    // Finding the number of bits in the integer
    int num_bits = sizeof(num) * 8;

    // Checking if the MSB is set
    msb = num & (1 << (num_bits - 1));

    if (msb) {
        printf("The Most Significant Bit (MSB) of %u is set.\n", num);
    } else {
        printf("The Most Significant Bit (MSB) of %u is not set.\n", num);
    }

    return 0;
}
