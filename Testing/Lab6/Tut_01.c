#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int space(char name)
{
    if (name == ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int new_line(char name)
{
    if (name == '\n')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int tab(char name)
{
    if (name == '\t')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // FILE *f1 = fopen("Ques1_Input1.txt", "r");

    char name;
    int a = 0, d = 0, c = 0;
    FILE *f1 = fopen("Ques1_Input1.txt", "a");
    if (ftell(f1) >= 0)
    {
        printf("f1 is open \n");
    }
    else
    {
        printf("f1 is closed \n");
    }

    fprintf(f1, "Successfully wrote to the file.");

    while (fscanf(f1, "%c", &name) != EOF)
    {
         if (name == '$')
            break;
        printf("%c",name);

        if (space(name))
        {
            a++;
        }
        if (new_line(name))
        {
            d++;printf("1");
        }
        if (tab(name))
        {
            c++;
        }
    }
    printf("Space was enterned %d number of times\n", a);
    printf("New_Line was enterned %d number of times\n", d);
    printf("Tab was enterned %d number of times\n", c);
    fclose(f1);
    return 0;
}