#include <stdio.h>

double sumSer(int n)
{
    // the sum of the series is stored in result
    double result = 0;
    // declare / initialize a variable named " temp "
    double temp = 1;
    int sign = 1;
    for (int i = 1; i <= n; i++)
    {
        // modify the value of " temp " as required
        temp = (temp * i) / (2 * i - 1);
        // update result to contain the correct value after i terms
        result += temp * sign;          
        sign *= -1;
    }
    return result;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    // print the soltion using the function sumSer
    printf("%lf", sumSer(n));
    return 0;
}
// printf("Hello world");
