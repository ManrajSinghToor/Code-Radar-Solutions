// Your code here...
#include<stdio.h>
int majority(int arr[],int n){
    if(n>0){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j] ||arr[i]==0){
                return arr[i];
                break;
            }
        }
    }return -1;
}else{
    return -1;
}
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printf("%d",majority(arr,n));
}