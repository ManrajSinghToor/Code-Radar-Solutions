// Your code here...
#include<stdio.h>

int largest_even_number(int arr[], int size) {
    int largest_even = -1; // Assuming all numbers are non-negative
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] > largest_even) {
            largest_even = arr[i];
        }
    }
    return largest_even;
}

int main() {
    int n;
    scanf("%d\n",&n)
    int arr[n];
    scanf("%d ",&arr);
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = largest_even_number(arr, size);
    if (result != -1) {
        printf(result);
    } else {
        printf("-1");
    }
    return 0;
}
