#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *Arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void main()
{
    struct stack *s;
    s->size=80;
    s->top=-1;
    s->Arr=(int*)malloc(s->size*sizeof(int));

    s->Arr[0]=5;
    s->top++;

    if(isEmpty(s))
    {
        printf("the stack is empty");
    }
    else{
        printf("stack is not empty");
    }
}

