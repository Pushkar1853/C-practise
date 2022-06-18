// Queue implementation in C
#include <stdio.h>
#include <stdlib.h>

struct queue{
    unsigned capacity;
    int rear,front;
    int *array;
};

int isempty(struct queue *queue);
int isfull(struct queue *queue);

struct queue* createqueue(unsigned capacity){
    struct queue *queue=(struct queue*)malloc(sizeof(struct queue));
    queue->front=-1;
    queue->rear=-1;
    queue->capacity=capacity;
    queue->array=(int*)malloc(queue->capacity*sizeof(int));
    return queue;
}
void enQueue(struct queue*,int);
int deQueue(struct queue*);
void display(struct queue*);
// int queue->array[queue->capacity], queue->front = -1, queue->rear = -1;

int main()
{
    struct queue queue;
    queue.capacity=100;
    queue.front=queue.rear=-1;
    queue.array=(int*)malloc(queue.capacity*sizeof(int));
    enQueue(&queue,12);
    enQueue(&queue,15);
    enQueue(&queue,17);

    return 0;
}
int isempty(struct queue *queue){
    return queue->front==queue->rear;
}

int isfull(struct queue *queue){
    return queue->rear==queue->capacity-1;
}

void enQueue(struct queue* queue,int value)
{
    if (isfull(queue))
        {printf("\nQueue is Full!!");
    }
    else
    {
        // if (queue->front == -1)
        //     queue->front = 0;
        queue->rear++;
        queue->array[queue->rear] = value;
        // printf("\nInserted -> %d", value);
    }
}

int deQueue(struct queue*queue)
{
    int a=-1;
    if (isempty(queue))
        printf("\nQueue is Empty!!");
    else
    {
        // printf("\nDeleted : %d", queue->array[queue->front]);
        queue->front++;
        // if (queue->front > queue->rear)
        //     queue->front = queue->rear = -1;
        a=queue->array[queue->front];
    }
    return a;
}

// Function to print the queue
void display(struct queue* queue)
{
    if(isempty(queue));
        printf("\nQueue is Empty!!!");
        int i;
        printf("\nQueue elements are:\n");
        for (i = queue->front; i <= queue->rear; i++)
        printf("%d  ", queue->array[i]);
    printf("\n");
}