#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void bin(unsigned n)
{
    /* step 1 */
    if (n > 1)
        bin(n / 2);

    /* step 2 */
    printf("%d", n % 2);
}

// Driver Code
int main(void)
{
    bin(7);
    printf("\n");
    bin(4);
}
