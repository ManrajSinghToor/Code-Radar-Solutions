#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j=n-i;j++){
            for(int k='A';k=(char)i+64;k++){
                printf("%d ",k);
            }printf("\n");
        }
    }
    return 0;
}