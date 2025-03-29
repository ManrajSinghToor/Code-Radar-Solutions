// Your code here...
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int  j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }
}
int kthSmallest(int arr[],int n,int k){
    sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[n-k]);
    }
}