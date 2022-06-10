#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct node
{
    int data;
    struct node *next;
};

void createnode(struct node **head,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=*head;
    *head=temp;
}

void printlist(struct node *head)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insertnodeatend(struct node **head,int data)
{
    struct node *temp,*temp1;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    temp1=*head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
}
void insertnodeatbeginning(struct node **head,int data)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=*head;
    *head=temp;
}

void printelementatpos(struct node *head,int pos)
{
    struct node *temp;
    temp=head;
    int i;
    for(i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    printf("%d\n",temp->data);
}

void deleteelementatpos(struct node **head,int pos)
{
    struct node *temp,*temp1;
    temp=*head;
    int i;
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
}

int main(){
    struct node *head=NULL;
    createnode(&head,1);
    createnode(&head,2);
    createnode(&head,3);
    createnode(&head,4);
    createnode(&head,5);
    createnode(&head,6);
    createnode(&head,7);
    createnode(&head,8);
    createnode(&head,9);
    createnode(&head,10);
    printlist(head);
    insertnodeatend(&head,11);
    printlist(head);
    insertnodeatbeginning(&head,12);
    printlist(head);
    printelementatpos(head,5);
    deleteelementatpos(&head,5);
    printlist(head);
    return 0;
}