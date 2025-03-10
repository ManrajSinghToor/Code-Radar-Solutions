// Your code here...
void isPrime(int n){
    if(n<=1){
        isPrime = 0;
    }for(int i=2;i<=n/2;i++){
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
}