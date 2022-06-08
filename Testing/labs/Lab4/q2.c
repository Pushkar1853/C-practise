#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,j,k=0,n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            k+=10;
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}