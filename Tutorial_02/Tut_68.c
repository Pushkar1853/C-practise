#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct Employee
{
    int id;
    char name[53];
    float marks;
};
struct Employee e1, e2;

int main()
{
    struct Employee e1;
    e1.id = 12;
    e1.marks = 34.12;
    strcpy(e1.name , "Dua");
    struct Employee e2;
    e2.id = 13;
    e2.marks = 38.12;
    strcpy(e2.name, "Lipa");
    printf("The %s's marks are %f with %d id\n", e1.name, e1.marks, e1.id);
    printf("The %s's marks are %f with %d id\n", e2.name, e2.marks, e2.id);
    return 0;
}