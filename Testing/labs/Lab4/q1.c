// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <math.h>

// // int countDigit(long long z)
// // {
// //     if (z / 10 == 0)
// //         return 1;
// //     return 1 + countDigit(z / 10);
// // }

// void bin(unsigned n)
// {
//     if (n > 1)
//     {
//         bin(n / 2);
//     }
//     long long z = n % 2;
//     printf("%d", n % 2);
//     printf("%lld",z);
//     // printf("%d", countDigit(z));
// }

// int main(void)
// {
//     int a;
//     int count = 0;
//     // long long z;
//     scanf("%d", &a);
//     bin(a);
//     printf("\n");

//     do
//     {
//         z /= 10;
//         ++count;
//     } while (z != 0);
//     printf("Number of digits: %d", count);

//     // printf("%d", countDigit(z));
//     // long long z = unsigned n % 2;
//     // printf("%d", unsigned n % 2);
//     // printf("%d", countDigit(z));
//     return 0;
// }

// #include <stdio.h>
// int main() {
//   long long n;
//   int count = 0;
//   printf("Enter an integer: ");
//   scanf("%lld", &n);

//   // iterate at least once, then until n becomes 0
//   // remove last digit from n in each iteration
//   // increase count by 1 in each iteration
//   do {
//     n /= 10;
//     ++count;
//   } while (n != 0);

//   printf("Number of digits: %d", count);
// }
// do
// {
//     /* code */
// } while (/* condition */);

/* Function to get no of bits in binary
representation of positive integer */

#include <stdio.h>

unsigned int countBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count++;
        n >>= 1;
    }
    return count;
}
void bin(unsigned n)
{
    // printf("The Binary : ");
    if (n > 1)
    {
        bin(n / 2);
    }
    printf("%d", n % 2);
}

/* Driver program*/
int main()
{
    int i ;
    printf("Input : ");
    scanf("%d",&i);
    printf("The Binary : ");
    bin(i);
    printf("\n");
    printf("The Ouput : %d", countBits(i));
    return 0;
}

