#include <stdio.h>
#include<stdlib.h>

int fib(int n,int memo[]){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else if(memo[]){
        memo[n]=fib(n-1)+fib(n-2);
    }
    return memo[n];
}

int main(){
    int num, memo[100];
    system("CLS");
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The fibbonacci series: ");
    for(int i=0;i<num;i++){
        printf("%d, ",fib(num-i,&memo[num-i]));
    }
}