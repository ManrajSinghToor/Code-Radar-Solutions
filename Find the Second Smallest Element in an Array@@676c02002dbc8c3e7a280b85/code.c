// Your code here...
#include<stdio.h>
int sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d ",&arr[i]);
    }
    sort(arr, n);
    if (n > 2 && arr[n - 1] == arr[n - 2]){
        printf("%d",arr[n-3]);
    }
    if (n > 1 && arr[n - 1] != arr[n - 2]) {
        printf("%d", arr[n - 2]);
    } return 0;
    else{
        printf("-1");
    }
    
}
    // for(int i=0;i<n;i++){
    // if(sort(arr,n) && (arr[i]!=1)){
    //     printf("%d ",arr[n-2]);
    //     break;
    // }
    // if(sort(arr,n) && (arr[i] = 1)){
    //     printf("%d ",arr[n-3]);
    //     break;
    // }
//     else{
//         printf("-1");
//         break;
//     }
//   }
// }