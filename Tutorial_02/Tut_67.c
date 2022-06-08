#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("my_file.txt", "r");
    char str[20] ;
    fgets(str,14,ptr);
    printf("The character I read was %s\n", str);
    fclose(ptr);
    return 0;
}