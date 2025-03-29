// Your code here...
int printPrimeInRange(int start,int end){
    if(n<=1){
        return 0;
    }else{
        for(int i=start;i*i<=end;i++){
            if(end % i == 0){
                return 0;
            }
        }
    }return 1;
}