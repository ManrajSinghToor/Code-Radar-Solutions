// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
     int max =arr[0];
    int min = arr[0];

    // Loop through the array to find max and min
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }printf("%d ",min );
     printf("%d ",max);
     return 0;
}