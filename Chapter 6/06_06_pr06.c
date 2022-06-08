#include <stdio.h>
void Tentimes( int a,int *b){
    *b = 10 * (a);
}

int main()
{
    int i, b;
    printf("The value of the variable is ",i);
    scanf("%d", &i);
    Tentimes(i, &b);
    printf("The value of 10 times of it is %d.\n", b);
    printf("P.S. Made by pointers.");
    return 0;
}
// #include <stdio.h>
// void sumAndAvg(int a, int *sum)
// {
//     *sum = 10* (a) ;
// }

// int main()
// {
//     int i, sum;
//     i = 3;
//     sumAndAvg(i, &sum);
//     printf("The value of sum is %d\n", sum);
//     return 0;

// }