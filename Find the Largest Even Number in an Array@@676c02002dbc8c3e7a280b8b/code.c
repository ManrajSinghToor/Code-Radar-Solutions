// Your code here...
#include<stdio.h>
int check(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;i<n-i-1;j++){
            if(arr[j]>arr[j+1] && arr[j] % 2 == 0){
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
    }if(check(arr,n)){
        printf("%d ",arr[n-1]);
    }else{
        printf("-1");
    }return 0;
}