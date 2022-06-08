#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    printf("\n");
    int arr[n][n], brr[n][n];
    printf("Enter the matrix:\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d ", &arr[i][j]);
            // if(j==(n-1))
            // printf("\n");
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", arr[i][j]);
            if (j == (n - 1))
                printf("\n");
        }
    }
    printf("\n");
    for (int j = 0; j < n; ++j)
    {
        for (int i = 0; i < n; ++i)
        {
            brr[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", brr[i][j]);
            if (j == (n - 1))
                printf("\n");
        }
    }
     printf("\n");
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
    // for printing result
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
     int flag=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j && arr[i][j] != 1)
			{
				flag = -1;
				break;
			}
			else if (i != j && arr[i][j] != 0)
			{
				flag = -1;
				break;
			}
		}
	}
   printf("\n");
	if (flag == 0)
	{
		printf ("It is a IDENTITY MATRIX\n");
	}
	else
	{
		printf ("It is NOT an identity matrix\n");
	}
    return 0;
}