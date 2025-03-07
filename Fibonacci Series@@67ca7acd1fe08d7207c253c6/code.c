// Your code here...
int fib(int n){
    if (n<=1){
        return 1;
    }   int fibn = fib(n-1)+fib(n-2);
        int finalfib = fibn;
        return fibn;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",num)
}