// Your code here...
int findKthMissing(int arr[],int n,int k){
    for(int i=k+1;i<n;i++){
        for(int j=i+2;j<n;j++){
            if(arr[j]-arr[i]>1){
                printf("%d",i+3);
            }
        }
    }
}