// Your code here...
#include <stdio.h>

void convertToBinary(int number) {
    if (number == 0) {
        printf("0");
        return;
    }

    int binary[32]; // Array to store binary digits
    int index = 0;

    while (number > 0) {
        binary[index++] = number % 2; // Store the remainder (binary digit)
        number /= 2; // Divide the number by 2
    }

    for (int i = index - 1; i >= 0; i--) { // Print binary in reverse order
        printf("%d", binary[i]);
    }
}

int main() {
    int number;
    scanf("%d", &number);

    convertToBinary(number);
    printf("\n");

    return 0;
}


