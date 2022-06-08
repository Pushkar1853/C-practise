#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i++ is %d\n", i++);
    i++; //---> Pehle print fir increment kare
    ++i; //---> Pehle increment kare fir print kare
    i += 10;
    printf("The value of i is %d\n", i);
    return 0;
}