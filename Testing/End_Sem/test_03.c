// #include <stdio.h>

// void quiz(int i)
// {
//     if (i > 1)
//     {
//         quiz(i / 2);
//         quiz(i / 2);
//     }
//     printf("* ");
// }
// void main()
// {

//     quiz(2);
// }

#include<stdio.h>

int main(){
int x[][3][5]={{{1,2,3,4,5,}, {6,7,8,9,10}, {11,12,13,14,15}},{{16,17,18,19,20}, {21,22,23,24,25}, {26,27,28,29,30}},{{31,32,33,34,35}, {36,37,38,39,40}, {41,42,43,44,45}}};

printf("%d\n",(*(x))[1][4]);
}