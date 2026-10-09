#include<stdio.h>
#include<limits.h>
    void merge(int a[],int p,int q,int r){

    
        int L[100],R[100];
        int n1=q-p+1;
        int n2=r-q;
        int i,j,k;
        for(i=1;i<n1;i++){
            L[i]=a[p+i-1];
        }
        for(j=1;j<n2;j++){
            R[j]=a[q+j];
    }
    L[n1+1]=INT_MAX;
    R[n2+1]=INT_MAX;
    i=1;
    j=1;
    for(int k=p;k<r;k++){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j=j+1;
        }
    }
}
void merge_sort(int a[],int p,int r){
    if(p<r){
        int q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }
}
int main(){
    int a[100],n;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(int i=0;i<n;++){
        scanf("%d",&a[i]);
        merge_sort(a,0,n-1);
        printf("Enter sorted array:");
        for(int i=0;i<n;i++){
            printf("%d",a[i]);
        }
    }
    return 0;
}