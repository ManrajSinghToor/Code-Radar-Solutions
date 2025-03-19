// Your code here...
#include <stdio.h>

int main() {
    unsigned int number, n;
    scanf("%u", &number);
    scanf("%u", &n);

    // Clear the nth bit
    unsigned int mask = ~(1 << n); // Create a mask with the nth bit set to 0
    unsigned int result = number & mask; // Apply the mask to clear the nth bit

    printf("%u\n",result);

    return 0;
}
