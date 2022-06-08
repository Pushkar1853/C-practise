#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("Harry.text", "r");
    if (ptr == NULL){
        printf("The file does not exist\n");

    }
    else{
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The value of num ")
    }
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d", num);

    return 0;
}