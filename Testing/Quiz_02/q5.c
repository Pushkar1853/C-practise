#include <stdio.h>
#include <string.h>

int main(){
    char src[]="geekforgeeks";
    char dest[8];
    // strncpy(dest,src,8);
    strncpy(dest,src,8);
    int len=strlen(dest);
    printf("\nCopied string: %s\n",dest);
    printf("length of destination string: %d\n",len);
    return 0;
}