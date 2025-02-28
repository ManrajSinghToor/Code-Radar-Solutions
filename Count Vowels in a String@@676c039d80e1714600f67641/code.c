#include <stdio.h>
#include <string.h>
int main() {
    char str[99];
    fgets(str,99,stdin);
    int count = 0;
    if(str == "AEIOU"){
        count++;
    }else if(str == "aeoiu"){
        count++;
    }else{
        printf("Invalid");
    }printf("%d",count);
    return 0;
}