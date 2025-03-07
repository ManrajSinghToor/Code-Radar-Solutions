// Your code here...
int fibonacciSeries(int n){
    if (n ==1||n==2){
        return 1;
    }
    int fibn = fibonacciSeries(n-1)+fibonacciSeries(n-2);
    int finalfib = fibn;
    return fibn;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fibonacciSeries(n));
}