#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int c = "abcdefghijklmnopqrstupwxyz";
    int d = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(a == c){
        printf("Uppercase");
    }else if(a == d){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");}
    return 0;
}