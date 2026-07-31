#include <stdio.h>

int main() {
    int a[10][10];
    int b[10][10];
    int m[10][10] = {0}; 
    int i, j, r1, c1, r2, c2, k;


    printf("Enter size of 1st matrix :\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    printf("Enter size of 2nd matrix :\n");
    scanf("%d %d", &r2, &c2);
    

    if (c1 != r2) {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                m[i][j] += a[i][k] * b[k][j];
            }
        }
    }   

    printf("\nResultant Matrix (Multiplication):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}