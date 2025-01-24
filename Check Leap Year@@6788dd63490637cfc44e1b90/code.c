#include <stdio.h>
int main() {
    int year;
    scanf("%d",&year);
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return True;
            }
        }printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
    return 0;
}