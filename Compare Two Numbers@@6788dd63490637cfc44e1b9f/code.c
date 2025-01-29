#include <stdio.h>
int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if (n1 == n2){
    printf("Equal\n");}
    else if(n1 > n2){
        printf("First\n");
    }else if (n1 < n2){
        printf("Second\n");
    }else {
        printf("No one is greater");
    }
    return 0;
}