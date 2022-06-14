#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE], str3[MAX_SIZE];
    int res1,res2,res3;
    char max[MAX_SIZE],mid[MAX_SIZE],min[MAX_SIZE];

    /* Reads n strings from user */
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("Enter third string: ");
    gets(str3);

    /* Call strcmp() to compare both strings and stores result in res1 */
    compare_string(str1,str2);
    compare_string(str2,str3);
    compare_string(str3,str1);
    printf("%d\n",res1);
    printf("%d\n",res2);
    printf("%d\n",res3);
    return 0;
}

void compare_string(char str1[],char str2[]){
    int res1;
    char res[MAX_SIZE];
    res1 = strcmp(str1, str2);
    if (res1 == 0)
    {
        printf("Both strings are equal.\n");
        printf("Error.\n");

    }
    else if (res1 == -1)
    {
        strcpy(res,str1);
    }
    else if(res1 == 1)
    {
        strcpy(res,str2);
    }
}