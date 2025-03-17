// Your code here...
#include<stdio.h>
// int maxarr(int arr[],int n){
//     for (int i = 1; i <= n-1; i++) {
//         if (arr[i] > arr[i+1]) {
//             return 0;
//         }
//     }
//     return  1;
// }
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
     int max = 0;
    int min = arr[0];

    // Loop through the array to find max and min
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }printf("%d ",max );
     printf("%d ",min );
     return 0;
}