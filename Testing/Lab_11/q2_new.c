#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char stack[20];
int top = -1;
void push(char);
char pop();

int main()
{
    char a[20], t;
    int i, flag = 1;
    scanf("%s", a);
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] == '(' || a[i] == '{' || a[i] == '[')
            push(a[i]);

        if (a[i] == ')' || a[i] == '}' || a[i] == ']')
        {
            if (top == -1)
                flag = 0;
            else
            {
                t = pop();
                if (a[i] == ')' && (t == '[' || t == '{'))
                    flag = 0;
                if (a[i] == '}' && (t == '(' || t == '['))
                    flag = 0;
                if (a[i] == ']' && (t == '{' || t == '('))
                    flag = 0;
            }
        }
    }

    if (top >= 0)
        flag = 0;

    if (flag == 0)
        printf("Unbalanced\n");
    else
        printf("Balanced\n");
    return 0;
}

void push(char a)
{
    stack[++top] = a;
}
char pop()
{
    return stack[top--];
}
