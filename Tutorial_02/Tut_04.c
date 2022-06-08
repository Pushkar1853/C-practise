#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    do
    {
        if (n % 5 == 1)
        {
            printf("%d", n % 5 + 2);
            continue;
        }
        else if (n % 5 == 2)
        {
            printf("%d", n % 5 + 2);
        }
        else if (n % 5 == 3)
        {
            printf("%d", n % 5);
            break;
        }
        n++;
    } while (n % 5 <= 3 && n % 5 >= 2);
    return 0;
}