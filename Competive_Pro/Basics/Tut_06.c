#include <stdio.h>
#include <math.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < sqrt(n); i++)
    {
        if (!(n % i))
            printf("%d %d\n", i, n/i);
    }
}