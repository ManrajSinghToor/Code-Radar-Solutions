// Your code here...
#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);

    if (number == 0) {
        printf("0");
    } else {
        // Get the lowest set bit
        unsigned int lowest_set_bit = number & (1-number);

        printf("%u\n",lowest_set_bit);
    }

    return 0;
}



