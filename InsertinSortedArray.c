#include <stdio.h>
int main() {
    int i,j,k,temp=0,count=0,n,arr[101];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array(in ascending order): ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d",&k);
    for(i=n-1;i>=0;i--){
        if(k<arr[i])
        {temp=i;}
    }
    
    for(i=n;i>temp;i--){
        arr[i]=arr[i-1];
    }
    
    arr[temp]=k;
    
     for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}