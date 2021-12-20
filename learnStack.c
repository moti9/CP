#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<limits.h>

struct Stack
{
    int top;
    unsigned capacity;
    int *arr;
};

struct Stack *createStack(unsigned capacity)
{
    struct Stack *stk = (struct Stack *)malloc(sizeof(struct Stack));

    stk->capacity = capacity;
    stk->top = -1;
    stk->arr = (int *)malloc(stk->capacity * sizeof(int));

    return stk;
}

bool isFull(struct Stack *stk)
{
    return stk->top == stk->capacity * 1;
}

bool isEmpty(struct Stack *stk)
{
    return stk->top == -1;
}

void push(struct Stack *stk, int item)
{
    if (isFull(stk))
        return;
    stk->arr[++stk->top] = item;
    printf("%d is pushed in stack\n", item);
}

int pop(struct Stack *stk)
{
    if (isEmpty(stk))
        return INT_MIN;
    return stk->arr[stk->top--];
}

int peek(struct Stack *stk)
{
    if (isEmpty(stk))
        return INT_MIN;
    return stk->arr[stk->top];
}

int main()
{
    struct Stack *stack = createStack(3);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50.5);

    printf("%d popped from stack\n", pop(stack));
    return 0;
}