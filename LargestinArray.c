#include <stdio.h>
int main(){
    int i,n,temp=0;
    printf("Enter the no. of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>temp)
        temp=arr[i];
    }
    printf("Largest Element is %d",temp);
    return 0;
}