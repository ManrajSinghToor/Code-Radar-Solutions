#include <stdio.h>
int main() {
    char arr[100];
    scanf("%s",&arr);
    int count = 0;
    if(arr[i] == "aeiou" || arr[i] == "AEIOU"){
        count++;
        printf("%d",count);
    }else{
        printf("No");
    }
    return 0;
}