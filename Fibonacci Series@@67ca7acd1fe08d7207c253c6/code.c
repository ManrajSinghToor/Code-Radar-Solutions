// Your code here...
int fibonacciSeries(int n){
  int fib1 = 0;
  int fib2 = 1; 
  if(n==1||n==2){
    return 1;
  }for(int i=3;i<=n;i++){
    int fib = fib1+fib2;
    printf("%d ",fib);
    int fib1 =  fib2;
    int fib2 = fib;
     
  }
}

