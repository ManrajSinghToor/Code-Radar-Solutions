// Your code here...
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    // Flip all bits using the bitwise NOT operator (~)
    int flipped_number = ~number;

    printf("%d\n",flipped_number);

    return 0;
}


