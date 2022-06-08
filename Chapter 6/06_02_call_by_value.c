#include <stdio.h>
int sum(int x, int y);
int main(){
    int x=4 , y=7;
    printf("The value of x and y is %d and %d\n", x,y);
    printf("The value of 4+7 is %d\n", sum(x,y));
    printf("The value of x and y after function call is %d and %d\n", x,y);
    return 0;

}
int sum(int x, int y){
   int c;
   c=x+y;
   y=3434;
   x=23432;
    return c;
}