#include <stdio.h>
#include <string.h>
int main() {
    char str[99];
    fgets(str,99,stdin);
    int count = 0;
    for(int i=0;i<'\0';i++){
        if(str == "a"||str == "u"||str == "o"||str == "i"||str == "e"){
            count++;
        }else{
            printf(" ");
        }printf("%d",count);
    }   
    return 0;
}