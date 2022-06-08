#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    char b[0];
    double c;
 

    printf("Enter the value of integer: \t");
    scanf("%d", &t);
    printf("Enter the value of char: \t");
    scanf("%s", &b);
    printf("Enter the value of double: \t");
    scanf("%lf", &c);
    
    int *ptr1 = &t;
    char *ptr2 = &b[0];
    double *ptr3 = &c;
printf("The val: %d\n",t);
    printf("The address of int %d is OX%x\n", t, &ptr1);
    printf("The address of int %d* is OX%x\n", t, &(*ptr1));
    printf("The address of char %c is OX%x\n", b[0], &ptr2);
    printf("The address of char %c* is OX%x\n", b[0], &(*ptr2));
    printf("The address of double %lf is OX%x\n", c, &ptr3);
    printf("The address of double %lf* is OX%x\n", c, &(*ptr3));
    printf("\n");
    printf("The Value of int %d is %x\n", t, ptr1);
    printf("The Value of int %d* is OX%x\n", t, (*ptr1));
    printf("The Value of char %c is %x\n", b[0], ptr2);
    printf("The Value of char %c* is OX%x\n", b[0], (*ptr2));
    printf("The Value of double %lf is %x\n", c, ptr3);
    printf("The Value of double %lf* is OX%x\n", c, (*ptr3));
    printf("\n");
    printf("The Size of int %d is %x\n", t, sizeof(t));
    printf("The Size of int %d* is %x\n", t, sizeof(*ptr1));
    printf("The Size of char %c is %x\n", b[0], sizeof(ptr2));
    printf("The Size of char %c* is %x\n", b[0], sizeof(*ptr2));
    printf("The Size of double %lf is %x\n", c, sizeof(ptr3));
    printf("The Size of double %lf* is %x\n", c, sizeof(*ptr3));

    // int x=4;
    // int *p_x=&x;
    // printf("Addr x: %d\n",&x);
    // printf("Val p_x: %d\n",p_x);
    // printf("Val *p_x: %d\n",*p_x);
    // // *p_x
    return 0;
}