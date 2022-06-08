#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct member
{
    int serialnumber[20];
    long long int rollno;
    char name[20];
    char id[6];
    char coursename[100];
};

int main()
{
    FILE *fp, *fp1;
    fp = fopen("Lab11_Ques1_input.txt", "r");
    fp1 = fopen("Lab11_Ques1_output.txt", "w");
    if (fp == NULL)
    {
        printf("File not found");
        return 1;
    }
    int n ;
    fscanf(fp, "%d", &n);
    int count[n];
    printf("%d",n);
    struct member arr[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &arr[i].serialnumber);
        fscanf(fp, "%lld", &arr[i].rollno);
        fscanf(fp, "%s", &arr[i].name);
        fscanf(fp, "%s", &arr[i].id);
        fscanf(fp, "%s", &arr[i].coursename);
        if (strcmp(arr[i].id, "HS400") < 0)
        {
            fprintf(fp1, "%s\n", arr[i].id);
        }
        for (int j = 0; j < n; j++)
        {
            char value[1] = {j + '0'};
            if (strcmp(arr[i].id, strcat("HS", value)) == 0)
            {
                count[i]++;
            }
        }
    }
        for (int i = 0; i < n; i++)
        {
            fprintf(fp1, "%d\n", count[i]);
        }
    fclose(fp);
    fclose(fp1);
    return 0;
}