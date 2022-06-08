#include <stdio.h>

int main(){
    int arr[10][10],brr[10][10],r1,c1,r2,c2;
    printf("Enter the row for first marix: ");
    scanf("%d",&r1);
    printf("Enter the column for first marix: ");
    scanf("%d",&c1);
    printf("Enter the row for second marix: ");
    scanf("%d",&r2);
    printf("Enter the column for second marix: ");
    scanf("%d",&c2);

    printf("Enter the First matrix:\n");
    for(int i=0;i<r1;++i){
        for(int j=0;j<c1;++j){
            scanf("%d ", &arr[i][j]);
        }
    }
    printf("Enter the Second matrix:\n");
    for(int i=0;i<r2;++i){
        for(int j=0;j<c2;++j){
            scanf("%d ", &brr[i][j]);
        }
    }
    printf("The First matrix:\n");
    for(int i=0;i<r1;++i){
        for(int j=0;j<c1;++j){
            printf("%d ", arr[i][j]);
            if(j==(c1-1))
            printf("\n");
        }
    }
    printf("The Second matrix:\n");
    for(int i=0;i<r2;++i){
        for(int j=0;j<c2;++j){
            printf("%d ", brr[i][j]);
            if(j==(c2-1))
            printf("\n");
        }
    }
    printf("multiply of the matrix =\n");
    int mul[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                mul[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    int length=sizeof(mul)/sizeof(mul[0][0]);
    int min=mul[0][0];
    for(int i=0;i<length;i++){
    for(int j=0;j<length;j++){
        if(mul[i][j]<min)
        min=mul[i][j];
    }}
    printf("Smallest element present in matrix",min);
    return 0;
}

