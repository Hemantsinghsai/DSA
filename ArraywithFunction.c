#include <stdio.h>

void arrayFunction(int arr[],int size){
    int i;

    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    

 printf("\n");
}

void getElement(int arr[],int size,int index){
    if(index>=0&& index<size)
    printf("%d",arr[index]);
}

int main(){
    int size,i,index;
    scanf("%d",&size);
    scanf("%d",&index);
    int arr[size];
    printf("Enter Array");
     for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
     getElement(arr,size,index);
    return 0;
}