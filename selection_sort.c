#include <stdio.h>
void swap(int a[], int p, int q) {
    int temp = a[p];
    a[p] = a[q];
    a[q] = temp;
}

int main() {
    int i, j, min, n, a[20];
    
    printf("Enter the total no. of elements : \n");
    scanf("%d", &n);
    
    printf("Enter array's elements :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) { 
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }                                     
        }
        swap(a, i, min);
    }
    
    printf("sorted array : \n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
