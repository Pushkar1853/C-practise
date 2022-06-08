#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    FILE *f1=fopen("Input.txt","r+"),*f2=fopen("Output.txt","w");
    char word[20][100];
    for(int j=0;j<100;j++){
    for(int i=0;i<19;i++){
    fgets(f1,&word[i][j]);
    if(word[i][j]=='\n'){
        break;
    }}}

    for(int j=0;j<100;j++){
    for(int i=19;i>0;i--){
    fprintf(f2,"%c",word[i][j]);
    if(word[i][j]=='\n'){
        break;
    }
    }}

    return 0;
}