#include <stdio.h>
int isPalindrome(int num) {
    int rev = 0;
    int temp = num;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return (rev == num);
}

void countPalindromicNumbers(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }
    printf("%d\n", count);
}
