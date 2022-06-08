#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int count = 0;
int hailstone(int n)
{
    if (n % 2 == 0)
    {
    count = count + 1;
        return  n / 2;
    }
    else
    {
    count = count + 1;
        return 3 * n + 1;
    }
}

int main(void)
{
    int num;
    printf("Input a number: ");
    scanf("%d", &num);
    while (num!=1)
    {
        num = hailstone(num);
        if(num==1)
       {printf("1");
       break;}
    printf("%d,",num);
    }
   printf("\n");
    printf("No. of steps Required: %d", count);
    return 0;
}