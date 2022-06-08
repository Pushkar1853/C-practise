#include <stdio.h>

int main()
{
    int i;
    printf("**** Multiplication Table of 10 ****\n\n");
    for (i = 10; i; i--)
    {
        printf("10 X %d = %d\n", i, 10 * i);
    }

    return 0;
}