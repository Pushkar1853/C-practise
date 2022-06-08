#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    static int array[10][10];
    int i, j, n, m, rowsum = 0, sum = 0;
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
    // if (i == 0)
    // {
    //     for (j = 0; j < n; ++j)
    //     {
    //         sum = sum + array[i][j];
    //     }
    //     printf("Sum of %d row is = %d\n", i, sum);
    //     printf("%d ", sum);
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         rowsum=rowsum+array[i][j];

    //     }
    //     rowsum=0;
    // }
    for (int i = 0; i < m; i++)
    {
        int max[m];
        max[0] = rowsum;
        if (max[i] >= rowsum)
        {
            sum = i;
            // printf("%d",i);
        }
    }
    printf("The ans is %d", sum);

    return 0;
}
