#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int flag=0;

void tester(char arg[][3]){
int count=0;
char str2[100];
// printf("Enter the string\n");
// scanf("%s",args);
scanf("%s",str2);
for(int k=0;k<3;k++){
int len1=strlen(arg[k]);
int len2=strlen(str2);
if(len1 != len2)
{
// printf("The two words are not anagram");
flag+=0;
}
else
{
for(int i=0;i<len1;i++)
for(int j=0;j<len2;j++)
if(arg[i][k] == str2[j])
{
str2[j]='\0';
count++;
break;
}
if(count== len1)
// printf("hurray The two words are anagrams :)");
flag+=1;
else
flag+=0;
}
// printf("The two words are not anagram");
}
}

int main(){
    int tt;
    scanf("%d",&tt);
    char arg[100][tt];
        for(int i=0;i<tt;i++){
            scanf("%s",arg[i]);
        }
    tester(arg);
    if(flag>=1)
    printf("Yes");
    else
    printf("No");
    return 0;
}
