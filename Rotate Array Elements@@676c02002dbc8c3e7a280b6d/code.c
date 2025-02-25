// Your code here...
void revarr(int arr[],int n){
    int end = n-1;
    for(int i=0;i<end;i++){
        int swap = arr[i];
        arr[i] = arr[end];
        arr[end] = swap;
        end--;
    }
}
int main(){
    int n,arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }revarr(arr , n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }return 0;
}