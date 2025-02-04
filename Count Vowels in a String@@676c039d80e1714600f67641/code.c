#include <stdio.h>
int main() {
    char arr[];
    scanf("%s",&arr);
    int count = 0;
    if(arr[i]=="aioeu"||arr[i]=="AEIOU"){
        count++;
        printf("%d",count);
    }else{
        printf("NO");
    }
    return 0;
}