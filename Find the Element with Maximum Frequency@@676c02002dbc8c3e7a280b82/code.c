#include<stdio.h>
#include<limits.h>
int check(int arr[],int n){
    int maxcount = 0;
    int maxelement = INT_MIN;

    for(int i = 0;i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > maxcount){
            maxcount = count;
            maxelement = arr[i];
        }
    }
    return maxelement;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int element = check(arr,n);
    printf("%d",element);
    return 0;
}