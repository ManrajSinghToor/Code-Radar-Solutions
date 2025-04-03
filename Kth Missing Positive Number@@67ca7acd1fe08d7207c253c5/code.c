// Your code here...
int findKthMissing(int arr[],int n,int k){
    for(int i=k;i<n;i++){
        for(int j=k+1;j<n;j++){
            if(arr[j]-arr[i]>1){
                printf("%d",i+1);
            }
        }
    }
}