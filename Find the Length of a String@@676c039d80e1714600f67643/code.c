#include <stdio.h>
void countlen(char arr[]){
    int count = 0;
    for(int i=0;arr[i] !='\0';i++){
        count++;
    }printf("%d",count)
}
int main() {
    char word[100];
    countlen(word);
    return 0;
}