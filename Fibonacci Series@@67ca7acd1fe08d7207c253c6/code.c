// Your code here...
int fibonacciSeries(int n) {
    if(n<=2){
        return 1;
    }int fib = fibonacciSeries(n-1)+fibonacciSeries(n-2);
    printf("%d",fib);
}

