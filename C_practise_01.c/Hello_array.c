#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int aadhar[5];

    int *ptr = &aadhar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index : ", i+1);
        // scanf("%d",(ptr+i));
        scanf("%d", &aadhar[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        // printf("%d index = %d\n",i,*(ptr+i));
        printf("%d index = %d\n", i+1, aadhar[i]);
    }
    return 0;
}