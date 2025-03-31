// Your code here...
#include<stdio.h>
int sort1(int arr[],int n){
    if(n>1){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }return "NO";
}
}
int sort2(int arr[],int n){
    if(n>1){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }return "NO";
}
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }if(sort1(arr,n)||sort2(arr,n)){
        printf("YES");
    }else{
        printf("NO");
    }
}