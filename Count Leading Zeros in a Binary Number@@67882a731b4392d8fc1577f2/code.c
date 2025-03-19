// Your code here...
#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);

    int count = 0;
    int total_bits = sizeof(number) * 8; // Total bits in an unsigned int

    // Count leading zeros
    for (int i = total_bits - 1; i >= 0; i--) {
        if ((number >> i) & 1) {
            break; // Stop when we encounter the first 1
        }
        count++;
    }

    printf("%d\n",count);

    return 0;
}
