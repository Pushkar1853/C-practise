#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
float average(float age[]);

int main()
{
    float avg, age[] = {23.4, 55, 22.6, 3, 40.5, 18};
    int i;
    avg = average(age);
    printf("Average of ");
    for (int i = 0; i < 5; ++i)
    {
        printf("%1.2f , ", age[i]);
    }
    printf("%1.2f ",age[5]);
    printf("= %.2f\n" ,avg);
    return 0;
}

float average(float yrs[])
{
    int i;
    float avg, sum = 0.0;
    for (int i = 0; i < 6; ++i)
    {
        sum = sum + yrs[i];
    }
    avg = (sum / 6);
    return avg;
}