#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int main()
{
    printf("%d", getBit(5, 2));
    return 0;
}