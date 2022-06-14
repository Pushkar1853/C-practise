#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int arr[10000];
    int data,head,tail;
    head=arr[0];
    
    printf("Menu\n");
    printf("1.Insert at beginning\n");
    printf("2.Insert at end\n");
    printf("3.Insert at position\n");
    printf("4.Delete at beginning\n");
    printf("5.Delete at end\n");
    printf("6.Delete at position\n");
    printf("7.Print\n");
    printf("8.Exit\n");
    int choice;
    switch (choice) 
    {
    case 1: enqueue(arr,data,&head,&tail);
        break;
    
    case 2: dequeue(&head);
        break;

    case 3: printfront(&head);
        break;
    
    case 4: printrear(&head);
        break;

    case 5: printempty(&head);
        break;
    
    case 6: printfull(&head);
        break;

    default: printf("Invalid choice");
        break;
    }
    return 0;
}

void enqueue(int arr[],int data,int *front,int *rear){
    if(*rear==9999){
        printf("Queue is full");
        return;
    }
    if(*front==-1){
        *front=0;
    }
    *rear=(*rear)+1;
    arr[*rear]=data;
}
void dequeue(int arr[],int *front,int *rear){
    if(*front==-1){
        printf("Queue is empty");
        return;
    }
    *front=(*front)+1;
}
void printqueue(int arr[],int front,int rear){
    int i;
    if(front==-1){
        printf("Queue is empty");
        return;
    }
    for(i=front;i<=rear;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
// void printfront(int arr[],int front){
//     if(front==-1){
//         printf("Queue is empty");
//         return;
//     }
//     printf("%d\n",arr[front]);
// }
// void printrear(int arr[],int rear){
//     if(rear==9999){
//         printf("Queue is empty");
//         return;
//     }
//     printf("%d\n",arr[rear]);
// }
// void printempty(int front,int rear){
//     if(front==-1 && rear==9999){
//         printf("Queue is empty");
//         return;
//     }
// }
// void printfull(int front,int rear){
//     if(front!=-1 && rear!=9999){
//         printf("Queue is full");
//         return;
//     }
// }
// void printsize(int front,int rear){
//     if(front==-1 && rear==9999){
//         printf("Queue is empty");
//         return;
//     }
//     printf("%d\n",(rear-front)+1);
// }
// void printall(int arr[],int front,int rear){
//     int i;
//     if(front==-1){
//         printf("Queue is empty");
//         return;
//     }
//     for(i=front;i<=rear;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// void printreverse(int arr[],int front,int rear){
//     int i;
//     if(front==-1){
//         printf("Queue is empty");
//         return;
//     }
//     for(i=rear;i>=front;i--){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// void printmiddle(int arr[],int front,int rear){
//     int i;
//     if(front==-1){
//         printf("Queue is empty");
//         return;
//     }
//     if((rear-front)%2==0){
//         i=(rear-front)/2;
//         printf("%d ",arr[i]);
//     }
//     else{
//         i=(rear-front)/2;
//         printf("%d ",arr[i]);
//         i=i+1;
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// void printnth(int arr[],int front,int rear,int n){
//     int i;
//     if(front==-1){
//         printf("Queue is empty");
//         return;
//     }
//     i=front+n;
//     printf("%d\n",arr[i]);
// }

