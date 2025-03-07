// Your code here...
int fibonacciSeries() {
    int n;
    scanf("%d",&n);
    for (int i = 2; i < n; i++) {
        int c;
        c = a + b;
        a = b;
        b = c;
    }printf("%d ", c);
}
