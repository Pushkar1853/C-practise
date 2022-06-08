#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int l,b,*a;
    a=area(l,b);
    printf("%d",*a);
    return 0;
}

int *area(int l,int b){
    int x;
    x=l*b;
    return &x;
}