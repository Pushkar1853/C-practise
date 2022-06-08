#include <stdio.h>

int main()
{
    int a;
    printf("Enter your number: \n", a);
    scanf("%d", &a);
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}