#include <stdio.h>
int main(){
    int n=8,i,k;
    printf("Enter Array:");
    int arr[n];
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position at which element is to be inserted:");
    scanf("%d",&k);
    int j=n-1;
    while(j>=k-1){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[k-1]=99;
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}