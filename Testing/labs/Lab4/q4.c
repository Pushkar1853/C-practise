#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int n, rem, sum = 0, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        rem = n % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("%d is a perfect number",n);
    }
    else
    {
        printf("%d is not perfect number",n);
    }
    return 0;
}
