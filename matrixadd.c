#include<stdio.h>
void main(){
    int a[10][10];
    int b[10][10];
    int m[10][10];
    int i,j,r,c;
    printf("enter size of matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter elements of firt matrix\n");
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix\n");
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            m[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("New matrix by additon of above two matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}