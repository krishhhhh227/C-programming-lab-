#include <stdio.h>
int main(){
    int a[10],i,n,target;

    printf("Enter total of elements : ");
    scanf("%d",&n);

    printf("Enter array's elements : \n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Which element you want to find in ths array : ");
    scanf("%d",&target);

    int l=0,r=n-1,mid;
    while (l<=r){
        mid=(l+r)/2;
        if (a[mid]==target){
            printf("Element found at index : %d",mid);
            break;
        }
        else if (a[mid]>target){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

}