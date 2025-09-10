#include <stdio.h>
int main(){
    int m,n,i=0,j=0;
    printf("Enter size of the array");
    scanf("%d %d",&m,&n);
    int a[m],b[n],c[m+n];
    printf("Enter array 1");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter array 1");
     for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    
    int k=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           if(a[i]<b[j]){
            c[k]=a[i];
            k++ ;
           }else if (a[i]>b[j])
          { c[k]=b[j] ;
             k++;}
             else{
                k++;
             }
        
    }

    for(i=0;i<m+n;i++){
        printf("%d",c[i]);
        printf("\n");
    }
    }
    
   return 0;


}
