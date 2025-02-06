#include <stdio.h>
int main() {
    int n;
    int s;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n % i == 0){
            printf("Not Prime");
        }
    }if(s == 2||s==7||s==13){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}