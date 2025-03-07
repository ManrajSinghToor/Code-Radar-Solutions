// Your code here...
int fibonacciSeries() {
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i = 2; i < n; i++) {
        int c;
        c = a + b;
        a = b;
        b = c;
    }printf("%d ", c);
}
