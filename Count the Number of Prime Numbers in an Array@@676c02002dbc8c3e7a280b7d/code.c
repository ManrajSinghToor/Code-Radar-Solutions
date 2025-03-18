// Your code here...
#include <stdio.h>
int iprime(int arr[],int n){  
    if (n <= 1){
        return 0;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }  
    }     
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n+1;i++){
    scanf("%d ",&arr);
}
    int count = 0;
    if(iprime(arr,n)){
        count++;
    }printf("%d",count);
}