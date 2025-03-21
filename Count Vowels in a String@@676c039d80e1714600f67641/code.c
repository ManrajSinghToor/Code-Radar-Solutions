#include <stdio.h>
#include <string.h>
int main() {
    char str[99];
    fgets(str,99,stdin);
    int count = 0;
    for(char i=0;str[i]!='\0';i++){
        char ch = tolower(str[i]);
        if(ch == "a"||ch == "u"||ch == "o"||ch == "i"||ch == "e"){
            count++;
        }else{
            printf(" ");
        }printf("%d",count);
    }   
    return 0;
}