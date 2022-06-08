#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    FILE *f1=fopen("Input.txt","r"), *f2=fopen("Output.txt","w");
    char str[100];
    while(fgets(str,100,f1)!=EOF){
        if(str=='\n'){
            break;
        }
        for(int i=0;i<100;i++){
        fprintf(f2,"%s",str[i]);}
    }
    return 0;
}