#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{  
    char ch; 
    //=NULL;
    FILE *f1 = fopen("CS_101_attentance.txt", "r");

  

    while (ch != EOF)
    {
        ch = fgetc(f1);
        printf("%c", ch);

        
    }
    fclose(f1);
    return 0;
}