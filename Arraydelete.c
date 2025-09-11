#include <stdio.h>
int main(){
    int n=8,i,k;
    printf("Enter Array:");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position at which element is to be deleted:");
    scanf("%d",&k);
    int j=k-1;
   for(i=k-1;i<n;i++){
    arr[i]=arr[i+1];}
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}