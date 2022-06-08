#include <stdio.h>

int main()
{
    int a,b,c,d,ans;
    
      printf("Enter number a\n");
      scanf("%d", &a);
      printf("Enter number b\n");
      scanf("%d", &b);
      printf("Enter number c\n");
      scanf("%d", &c);
      printf("Enter number d\n");
      scanf("%d", &d);
    
    if (a<b)
        {if (b<c)
            {if (c<d)
                {ans=d;}
            else if (c>d)
                {ans = c;}}
        else if (b>c)
            {if (b>d)    
                {ans=b;}
            else if (b<d)
                {ans = d;}}
        }
    
    else if (a>b)
        {if (a<c)
            {if (c<d)
                {ans=d;}
            else if (c>d)
                {ans=c;}}
        else if (a>c)
            {if (a>d)    
                {ans=a;}
            else if (a<d)
                {ans = d;}}
        
        }
    printf("The greatest of four is %d", ans);
    return 0;
}   
