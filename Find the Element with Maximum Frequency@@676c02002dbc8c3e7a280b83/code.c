#include <stdio.h>
void maxFrequency(int arr[], int n) {
    int maxCount = 0;
    int res = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            res = arr[i];
            maxCount = count;
        }
    }

    printf("%d",res);
    printf("%d", maxCount);
}

