void rotate(int* x, int len, int k) {
    int arr[len];
    while(k>len){
        k=k-len;
    }
    for(int i=0;i<len;i++){
        arr[i]=x[i];
    }
    for(int i=0;i<len-(len-k);i++){
        x[i]=arr[i+len-k];
    }
    for(int i=0;i<len-k;i++){
        x[i+k]=arr[i];
    }
}
