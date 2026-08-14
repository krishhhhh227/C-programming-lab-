#include <stdio.h>
int main(){
    int a[10],i,n,target;\

    

    printf("Enter total of elements : ");
    scanf("%d",&n);
    printf("Enter array's elements : \n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for (i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (a[j]>a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int flag=0;

    printf("Which element you want to find in ths array : ");
    scanf("%d",&target);

    int l=0,r=n-1,mid;
    while (l<=r){
        mid=(l+r)/2;
        if (a[mid]==target){
            printf("Element found at index : %d",mid);
            flag=1;
            break;
        }
        else if (a[mid]>target){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if (flag==0){
        printf("Element not found in the array.");
    }

}
