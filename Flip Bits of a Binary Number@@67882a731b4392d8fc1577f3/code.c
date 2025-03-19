// Your code here...
#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);

    // Flip all the bits using the bitwise NOT operator (~)
    unsigned int flipped_number = ~ number;

    printf("%u\n",flipped_number);

    return 0;
}
