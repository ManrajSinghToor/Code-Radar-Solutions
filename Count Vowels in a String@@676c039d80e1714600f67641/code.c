#include <stdio.h>
int main() {
    char arr[100];
    scanf("%s",&arr);
    int count = 0;
    if(arr[i]== "a"||"e"||"i"||"o"||"u"||arr[i]=="A"||"E"||"I"||"O"||"U"){
        count++;
        printf("%d",count);
    }else{
        printf("NO");
    }
    return 0;
}