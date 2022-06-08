#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("You are above 90, you cannot drive");
    }
    else if (age <= 18)
    {
       printf("You are below 18, you cannot drive");
    }
    else
    {
    
        printf("You can drive");
    }
    return 0;
}