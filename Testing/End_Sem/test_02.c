#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // int x,i;
    // i=scanf("%d",&x);
    // printf("%d",i);
    // printf("%s", "%s");
    char str1[15];
    char str2[15];
    int ret;
    strcpy(str1, " aAbBcC ");
    strcpy(str2, " aABbcC ");
    ret = strcmp(str1, str2);
    printf("%d",ret);
    if (ret > 0)
        printf(" str2 < str1 ");
    else if (ret < 0)
        printf(" str1 < str2 ");
    else
        printf(" str1 = str2 ");
    printf("%d",strcmp("B","b"));
    return 0;
}