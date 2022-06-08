#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    scanf("%d",&a);
    int *ptr=&a;
    printf("The val: %d\n",a);
    printf("The address: %d",ptr);
    return 0;
}