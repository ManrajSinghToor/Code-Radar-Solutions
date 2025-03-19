// Your code here...
#include <stdio.h>

int main() {
    unsigned int number;

    scanf("%u", &number);

    if (number == 0) {
        printf("0");
    } else {
        int count = 0;

        // Count trailing zeroes
        while ((number & 1) == 0) {
            count++;
            number >>= 1; // Right shift the number by 1
        }

        printf("%d\n",count);
    }

    return 0;
}
