// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<=n;i++){
        int countdup = 0;
        int countnon = 0;
        for(int j=i+1;j<n;i++){
            if(arr[i] == arr[j]){
                countdup++;
                arr[j] = -1;
            }else{
            countnon++;
        }
        }if(arr[i]!=-1){
            break;
        }
    }printf("%d",countnon);
}