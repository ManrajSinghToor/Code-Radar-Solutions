void isPrime(int num){
    if(n<=1){
        return 0;
    }else{
        for(int i=2;i*i<=n;i++){
            return 0;
        }
    }return 1;
}
int printPrimesInRange(int start,int end){
    for(int i=start;i<end;i++){
        if(isPrime(i)){
            printf("%d",i);
        }
    }
}