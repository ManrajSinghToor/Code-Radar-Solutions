// Your code here...
int main(){
    char str1[100];
    fgets(100,str1,stdin);
    char str2[100];
    fgets(100,str2,stdin);
    strcat(str1,str2);
    printf(str1);
}