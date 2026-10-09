#include<stdio.h>
void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
    }
}
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ",n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Before sorting: ");
    printArray(arr, n);

    insertionSort(arr, n);
    printf("After sorting: ");
    printArray(arr, n);

    return 0;
}
