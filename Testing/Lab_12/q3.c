#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE], str3[MAX_SIZE];
    int res1,res2,res3;
    char str1m[MAX_SIZE], str2m[MAX_SIZE], str3m[MAX_SIZE];

    /* Reads two strings from user */
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    /* Call strcmp() to compare both strings and stores result in res1 */
    res1 = strcmp(str1, str2);

    if (res1 == 0)
    {
        printf("Both strings are equal.");
        str1m=str1;
    }
    else if (res1 == -1)
    {
        str1m=str1;
    }
    else
    {
        str1m=str2;
    }

    /* Call strcpy() to copy str2 to str3 */
    res2 = strcmp(str1m, str3);

    if (res2 == 0)
    {
        printf("Both strings are equal.");
        str2m=str1m;
        str3m=str3;
    }
    else if (res2 == -1)
    {
        str2m=str1m;
        str3m=str3;
    }
    else
    {
        str2m=str3;
        str3m=str1m;
    }
    printf("%s\n",str2m);
    printf("%s\n",str1m);
    printf("%s\n",str3m);

    return 0;
}