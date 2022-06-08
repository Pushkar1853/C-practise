#include <stdio.h>
int fact(int n);
int digitsum(int n);

int main(){
    int i,n;
    int t1=1,t2=1;
    int nexterm=t1+t2;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("THe fibonacci series: %d, %d, ",t1,t2);

    for(i=3;i<=n;i++){
        printf("%d, ",nexterm);
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;
    }
    printf("\n%d\n",fact(n));
    printf("\n%d\n",digitsum(n));
    return 0;
}

int fact(int n){
    
    if(n==0){
        return 1;
    }
    return n*fact(n-1); 
}

    int digitsum(int n){
        if(n==0){
            return 0;
        }
       return (n%10)+ digitsum(n/10);
    }