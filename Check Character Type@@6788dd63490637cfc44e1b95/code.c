#include <stdio.h>
int main() {
    char ch;    
    char a = "bcdfghjklmnpqrstvwxyz";
    char b = "aeiou";
    char c = "1234567890";
    char d = "@#$%&*!";
    if (ch == a){
        printf("Vowel");
    }else if(ch == b){
        printf("Consonant");
    }else if(ch == c){
        printf("Digit");
    }else if(ch == d){
        printf("Special Character");
    }else{
        printf("Anything");
    }
    return 0;
}