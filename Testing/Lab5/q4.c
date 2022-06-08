#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int max(int a, int b, int c)
{
    int maxm;
    if (a > b)
    {
        maxm = a;
        if (maxm > c)
        {
            maxm = c;
        }
    }
    else
    {
        maxm = b;
        if (maxm > c)
        {
            maxm = c;
        }
    }
    return maxm;
}
// void SumTable(int arr[][],int n, int m,int number);

int main()
{

    static int array[10][10];
    int i, j, n, m, rowsum = 0, r1, r0, r2, sum = 0;
    printf("Enter the order of matrix : \n");
    scanf("%d %d", &m, &n);

    printf("Enter the coefficients of the matrix: \n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nEntered matrix: \n");
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
        {
            printf("%d  ", array[i][j]);
            if (j == n - 1)
                printf("\n");
        }

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            rowsum = rowsum + array[i][j];
        }

        printf("Sum of %d row is = %d\n", i, rowsum);
        rowsum = 0;
    }
    // colsum = 0;
    // for (j = 0; j < n; ++j)
    // {
    //     for (i = 0; i < m; ++i)
    //     {
    //         colsum = colsum + array[i][j];
    //     }

    //     printf("Sum of the %d column is = %d\n", j, colsum);
    //     colsum = 0;
    // }

    if (i == 0)
    {
        for (j = 0; j < n; ++j)
        {
            sum = sum + array[i][j];
        }
        printf("Sum of %d row is = %d\n", i, sum);
        r0 = sum;
        printf("%d ", sum);
    }
    else if (i == 1)
    {
        for (j = 0; j < n; ++j)
        {
            sum = sum + array[i][j];
        }
        printf("Sum of %d row is = %d\n", i, sum);
        r1 = sum;
        printf("%d ", sum);
    }
    else if (i == 2)
    {
        for (j = 0; j < n; ++j)
        {
            sum = sum + array[i][j];
        }
        printf("Sum of %d row is = %d\n", i, sum);
        r2 = sum;
        printf("%d ", sum);
    }
    printf("%d", max(r0, r1, r2));
    return 0;
}
