#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

int main()
{

    return 0;
}

void delete (int n)
{
    struct node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for (i = 0; i < n - 2; i++)
    temp1 = temp1->next;
    struct node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}

void insert(struct node **head, int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    if (*head = NULL)
    {
        *head = temp;
        return;
    }
    temp->next = *head;
    *head = temp;
}

void print(struct node *head)
{
    printf("List is:");
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->data;
    }
}