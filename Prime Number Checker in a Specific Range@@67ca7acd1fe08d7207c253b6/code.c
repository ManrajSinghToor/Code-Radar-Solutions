int isPrime(int n){
    if(n<=1){
        return 0;
    }else{
        for(int i=2;i*i<=n;i++){
            if(n % i ==0){
            return 0;
            }
        }
    }return 1;
}
int printPrimesInRange(int start,int end){
    int var = 0;
    for(int i=start;i<=end;i++){
        if(isPrime(i)){
            printf("%d ",i);
            var = 1;
        }
    }if(!var){
        printf("No prime numbers");
    }
}