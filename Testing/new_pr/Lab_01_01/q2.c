#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int y1, x2, x1, y2, r2, r1;
    scanf("%d", &x1);
    scanf("%d", &y1); 
    scanf("%d", &r1);
    scanf("%d", &x2);
    scanf("%d", &y2);
    scanf("%d", &r2);
    int sum = r1 + r2;
    int diff = abs(r1 - r2);
    int len = sqrt(pow((abs(x2 - x1)), 2) + pow((abs(y2 - y1)),2));
    if (len > sum)
    {
        printf("Circles do not touch!/#Away/");
    }
    else if (len == sum)
    {
        printf("Touching circle form outside");
    }
    else if (len < sum && len > diff)
    {
        printf("Intersecting Circles!");
    }
    else if (len == diff)
    {
        printf("Circles touch from inside");
    }
    else if (len < diff)
    {
        printf("Circles do not touch,One lies inside another!");
    }
    return 0;
}