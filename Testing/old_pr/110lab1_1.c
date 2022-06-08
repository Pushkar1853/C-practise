#include <stdio.h>
#define MAX 100

int main(){
    int a,b;
    char c[MAX],d[MAX];
    char e[MAX];
    scanf("%d",&a);
    scanf("\n");
    scanf("%c",&c);
    scanf("\n");
    scanf("%c",&d);
    scanf("\n");
    scanf("%d",&b);
    scanf("\n");
    scanf("%c",&e);
  
    printf("%d%c %c %d%c\n",a,c,e,b,d);
    return 0;
}