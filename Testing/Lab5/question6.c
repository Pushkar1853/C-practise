#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    FILE *f1= fopen("CS_101_attentance.txt","r");
    // char ch =NULL;
    char name[100];
    while (fscanf(f1,"%s",name)!=EOF)
    {
        printf("%s ",name);
    }
    fclose(f1);
    
    return 0;
}