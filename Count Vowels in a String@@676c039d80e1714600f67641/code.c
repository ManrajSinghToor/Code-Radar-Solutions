#include <stdio.h>
#include <string.h>
int main() {
    char str[99];
    fgets(str,99,stdin);
    int count = 0;
    for(int i=0;i<'\0';i++){
        if(str[99] == "a"||str[99] == "u"||str[99] == "o"||str[99] == "i"||str[99] == "e"){
            count++;
        }else{
            printf(" ");
        }printf("%d",count);
    }   
    return 0;
}