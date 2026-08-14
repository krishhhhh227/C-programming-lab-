#include <stdio.h>
int main(){
    int a[10],i,n,flag=0,key;

    printf("Enter total of elements : ");
    scanf("%d",&n);

    printf("Enter array's elements : \n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Which element you want to find in ths array : ");
    scanf("%d",&key);
    
    for (i=0;i<n;i++){
        if (a[i]==key){
            printf("Element found at index : %d",i);
            flag=1;
            break; }
        }
        
    if (flag==0){
        printf("Element not found..");
    }
    return 0;
}