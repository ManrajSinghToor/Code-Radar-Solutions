// Your code here...
#include <stdio.h>

int main() {
    unsigned int number, n;
    scanf("%u ", &number);
    scanf("%u", &n);

    // Get the nth bit
    int nth_bit = (number >> n) & 1;

    printf("The %u-th bit of %u is: %d\n", n, number, nth_bit);

    return 0;
}
