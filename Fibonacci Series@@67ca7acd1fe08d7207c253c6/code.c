// Your code here...
int fibonacciSeries() {
    int n;
    scanf("%d",&n);
    int a,b;
    // scanf("%d %d",&a,&b);
    for (int i = 2; i<n; i++) {
        int c;
        c = a;
        a = b;
        b = c;
        printf("%d %d",a,b);
    }
}
