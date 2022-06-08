#include <stdio.h>

int main()
{
    int arr[10], brr[10], m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    for (int i = 0; i < m; ++i)
        scanf("%d", &arr[i]);
    for (int j = 0; j < m; ++j)
        scanf("%d", &brr[j]);

    int mul[m * n];
    mul[0] = 0;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < (m * n); k++)
            {
                mul[k] = arr[i] * brr[j];
            }
        }
    }
    int length = sizeof(mul) / sizeof(mul[0]);
    int min = mul[0];
    for (int i = 0; i < length; i++)
    {
        if (mul[i] < min)
            min = mul[i];
    }
    printf("The minimum element is :%d", min);
    return 0;
}