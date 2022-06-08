#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*int main(){
    int b=15,X;
    X = b>8 ? b <<3 : b>4 ? b>>1:b;
    printf("%d\n",b);
    printf("%d\n",X);
    return 0;
}*/

int main()
{
    int x=9 ;
    switch (x)
    {
    default:
        x += 2;
    printf("%d", x);
   
    case 4:
        x = 4;
    printf("%d", x);
   
    case 5:
        x++;
        break;
    printf("%d", x);
        
    }
    printf("%d", x);
    return 0;
}