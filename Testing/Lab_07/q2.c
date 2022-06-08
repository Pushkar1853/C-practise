#include <stdio.h>


    struct library
    {
        int count;
        float acc_num,price;
        int flag;
        char author[15],title[15];
    };
    
int main(){
    struct library l1, l2, l3;
    system("CLS");
    printf("Enter the value of count of l1");
    scanf("%d", &l1.count);
    printf("Enter the value for accesion_num of l1");
    scanf("%f", &l1.accesion_num); 
    printf("Enter the value for author of l1");
    scanf("%s", l1.author);
    printf("Enter the value for author of l1");
    scanf("%s", l1.author);

    printf("Enter the value of count of l2");
    scanf("%d", &l2.count);
    printf("Enter the value for accesion_num of l2");
    scanf("%f", &l2.accesion_num); 
    printf("Enter the value for author of l2");
    scanf("%s", l2.author); 
    printf("Enter the value for author of l2");
    scanf("%s", l2.author); 
    
    
    printf("Enter the value of count of l3");
    scanf("%d", &l3.count);
    printf("Enter the value for accesion_num of l3");
    scanf("%f", &l3.accesion_num); 
    printf("Enter the value for author of l3");
    scanf("%s", l3.author);
    printf("Enter the value for author of l3");
    scanf("%s", l3.author);

    return 0;
}