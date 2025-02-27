// Your code here...
#include <stdio.h>
int is_prime(int arr[],int n){  
    if(n <= 1){
        return 0;
    }else{
        for(int i = 2;i <= n / 2; i++){
            if(n % i == 0){
                return 0;
            }
        }
    }return 1;   
}
int main(){
    int n;
    int count = 0;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n+1;i++){
    scanf("%d ",&arr);}
    if(is_prime(arr,n)){
        count++;
    }else{
        printf("No");
    }printf("%d",count);
}