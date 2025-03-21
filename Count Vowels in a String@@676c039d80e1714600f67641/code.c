#include <stdio.h>
#include <string.h>
int main() {
    char str[99];
    fgets(str,99,stdin);
    int count = 0;
    for(char i=0;i<'\0';i++){
        if(str[i] == "a"||str[i] == "u"||str[i] == "o"||str[i] == "i"||str[i] == "e"){
            count++;
        }else{
            printf(" ");
        }printf("%d",count);
    }   
    return 0;
}