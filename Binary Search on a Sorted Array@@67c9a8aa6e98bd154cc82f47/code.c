// Your code here...
int binarySearch(int arr[],int n,int target){
    
    for(int i=0;i<n-1;i++){
        if(arr[i]==target){
            printf("%d",i);
            // break;
        }else{
            return -1;
            break;
        }
    } 
}