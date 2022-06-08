#include <stdio.h>
#include <stdlib.h>

void main()
{
    // Declare array of size 100
    int a[100],proceed=0;
    int i, new, N, pos;
    system("CLS");
    printf("Enter how many elements you want to insert:\n");
    scanf("%d", &N);

    printf("Enter the elements: \n");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("Elements in array are:\n");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);

    printf("\n\nEnter which new element you want to insert: \n");
    scanf("%d", &new);

    // Accept position to insert new element
    printf("\nEnter the position to insert new element: \n");
    scanf("%d", &pos);

    for (i = 0; i < N; i++)
    {
        if (i + 1 == pos)
        {
            // a[pos - 1] = new;
            a[i] = new;
        }
    }
    // Print Output
    printf("Final Output: \n");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n-----Enter any key to Proceed--- ");
    scanf("%d",&proceed);
}