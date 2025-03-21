#include <stdio.h>
int sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = arr[j];
            }
        }
    }
}

int main() {
    int n = 100;
    char str[n];
    for(int i=0;i<n;i++){
        scanf("%s",&str);
    }
    (sort(str,100));
    for(int i=0;i<n;i++){
        printf("%s ",str[i]);
        }return 0;
    }