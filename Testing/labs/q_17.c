#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i]=i;
    }
    
    int *p;
    p=&a[0];
    printf("%d\n",&a[9]-&a[0]);
    printf("%d\n",&a[0]-&a[9]);
    // printf("%d\n",&a[0]+&a[9]);
    printf("%d\n",*(p+11));
    printf("%d\n",*(p+1));
    printf("%d\n",a[-1]);
    return 0;
}