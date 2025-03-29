#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    // int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            printf("%d", i);
            break;
        }
    }if(arr[n]!=k){
      printf("-1");
    }
    return 0;
}