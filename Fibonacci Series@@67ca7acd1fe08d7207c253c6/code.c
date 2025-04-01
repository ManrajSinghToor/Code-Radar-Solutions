// Your code here...
int fibonacciSeries(int n){
    if(n<2){
        return 1;
    }else{
        return fibonacciSeries(n)+fibonacciSeries(n-1);
    }

}

