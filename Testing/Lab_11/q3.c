#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
float sum(float *a,float *b);

struct number
{
    float real;
    float imaginary;
};

int main()
{
    struct number arr1,arr2;
    printf("Enter the real and imaginary part of the first number\n");
        scanf("%f ", &arr1.real);
        scanf("%f", &arr1.imaginary);
    printf("Enter the real and imaginary part of the second number\n");
        scanf("%f ", &arr2.real);
        scanf("%f", &arr2.imaginary);
    
    printf("%4.2f + %4.2fi", sum(&arr1.real, &arr2.real), sum(&arr1.imaginary, &arr2.imaginary));
    return 0;
}

float sum(float *a, float *b)
{
    return *a + *b;
}