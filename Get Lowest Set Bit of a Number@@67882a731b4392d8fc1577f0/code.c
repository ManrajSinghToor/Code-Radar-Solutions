// Your code here...
#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);

    // Get the lowest set bit
    unsigned int lowest_set_bit = number & -number;

    printf("%u\n",lowest_set_bit);

    return 0;
}


