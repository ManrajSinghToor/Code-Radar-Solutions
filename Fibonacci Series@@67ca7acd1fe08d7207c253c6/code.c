// Your code here...
int fibonacciSeries(int n) {
    if(n<=2){
        return 1;
    }else{
        for(int i=3;i<=n;i++){
        int fib = fibonacciSeries(n-1)+fibonacciSeries(n-2);
        int fibn = fib;
        printf("%d ",fibn);}
    }
}

