// Your code here...
int fibon(int n){
    if (n ==1||n==2){
        return 1;
    }
    int fibn = fibon(n-1)+fibon(n-2);
    int finalfib = fibn;
    return fibn;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fibon(n));
}