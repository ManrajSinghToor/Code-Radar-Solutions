// Your code here...
#include <stdio.h>

int main() {
    unsigned int number, n;
    scanf("%u", &number);
    scanf("%u", &n);

    // Set the nth bit
    unsigned int result = number | (1 << n);

    printf("%u\n",result);

    return 0;
}
