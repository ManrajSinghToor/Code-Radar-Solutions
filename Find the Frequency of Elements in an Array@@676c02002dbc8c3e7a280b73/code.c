// Your code here...
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int counnt = 1;
        for(iny j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                arr[j] = -1;
            }
        }if(arr[i] != -1){
            printf("%d %d",arr[i],count);
        }
    }
}