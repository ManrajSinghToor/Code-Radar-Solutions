// Your code here...
#include <stdio.h>
int palindrome(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i;j++){
        }for(int k=1;k<i-1;k++){
            return k;
        }for(int l=i;l>=1;l--){
            return l;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }if(palindrome(arr,n)){
        printf("YES");
    }else{
        printf("NO");
    }
}