#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int r1, c1, arr[r1][c1];
    scanf("%d %d", &r1, &c1);
    for (int i = 0; i <= r1; i++)
    {
        for (int j = 0; j <= c1; j++)
        {   
            printf("elements a[%d][%d]=",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    int r2, c2, brr[r2][c2];
    scanf("%d %d", &r2, &c2);
    for (int i = 0; i <= r2; i++)
    {
        for (int j = 0; j <= c2; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    printf("\n");
    
    int rslt[r1][c2];

    printf("Multiplication of given two matrices is:\n\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            rslt[i][j] = 0;

            for (int k = 0; k < r2; k++)
            {
                rslt[i][j] += arr[i][k] * brr[k][j];
            }

            printf("%d\t", rslt[i][j]);
        }

        printf("\n");
    }
}