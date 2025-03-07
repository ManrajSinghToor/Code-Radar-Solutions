// Your code here...
int fibonacciSeries() {
    int n;
    scanf("%d",&n);
    int a = 0, b = 1, c;
    scanf("%d %d",&a,&b);
    for (int i = 2; i < n; i++) {
        int c;
        c = a + b;
        a = b;
        b = c;
    }printf("%d ", c);
}
