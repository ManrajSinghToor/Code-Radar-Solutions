// Your code here...
#include<stdio.h>
#include <stdio.h>

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
    int arr[] = {1, 3, 7, 10, 24, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = largest_even_number(arr, size);
    if (result != -1) {
        printf("The largest even number in the array is: %d\n", result);
    } else {
        printf("There are no even numbers in the array.\n");
    }
    return 0;
}
