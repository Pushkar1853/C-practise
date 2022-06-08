#include <stdio.h>

int main(){
    char str[]="123.456";
    float x;
    sscanf(str,"%f",&x);
    printf("\nThe value of x: %f",x);
    printf("\n%f\n",x+1);
}