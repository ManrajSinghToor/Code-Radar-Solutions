#include <stdio.h>
int main() {
    char ch; 
    scanf("%c",&ch);  
    if(ch == 'b','c','d','f','g','h','j','k','l','m','z'){
        printf("Consonant")
    } 
    else if(ch == 'a','e','i','o','u'){
        printf("Vowel");
    }else if(ch == '1','2','3','4','5','6','7','8','9','0'){
        printf("digit");
    }else if(ch == '!','@','#','$','%','&','*','+'){
        printf("Special Character");
    }
    return 0;
}