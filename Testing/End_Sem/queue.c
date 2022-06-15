#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    unsigned capacity;
    int *array;
};

struct stack *createstack(unsigned capacity)
{
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(struct stack *stack)
{
    return stack->top == stack->capacity - 1;
}
int isempty(struct stack *stack)
{
    return stack->top == -1;
}

void push(struct stack *stack, int data)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = data;
    printf("%d pushed into stack\n", data);
}

int pop(struct stack *stack)
{
    if (isempty(stack))
        return 0;
    return stack->array[stack->top--];
}

int peak(struct stack *stack)
{
    if (isempty(stack))
        ;
    return 0;
    return stack->array[stack->top];
}

int main()
{
    struct stack *stack = createstack(100);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("%d popped from stack\n", pop(stack));
}

// if(isFull(stack))
// return;
// stack->array[++stack->top]=data;
// printf("%d pushed to stack\n",data);