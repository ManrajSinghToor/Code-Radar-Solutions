// Your code here...
#include <stdio.h>

int main() {
    unsigned int number;
    printf("Enter the number: ");
    scanf("%u", &number);

    // Check if the number is zero
    if (number == 0) {
        printf("The number has no set bits (it's zero).\n");
    } else {
        // Get the lowest set bit
        unsigned int lowest_set_bit = number & ~(number - 1);

        printf("%u",lowest_set_bit);
    }

    return 0;}


