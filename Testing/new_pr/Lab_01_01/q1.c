#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,j,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);    
    int arr[n],ar1[n];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    for (int j = 0; j <= i; j++){    
    if(arr[i]>40){
            
    ar1[j]=(arr[i]-40)*12;
    
    while (j<i) }
    }}
    {
        sum = sum + ar1[j];
    }
    

          printf("Sum of the array = %d\n",sum);
    
    return 0;
}
