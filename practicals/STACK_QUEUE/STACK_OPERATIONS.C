#include<stdio.h>
#define N 5;
int stack[5],top=-1;

void push()
{
    int x;
    printf("Enter data : ");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("\nStack Is Overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("\nStack Is Underflow");
    }
    else
    {
        item=stack[top];
        top--;
        printf("\n%d",item);
    }
}

void peek()
{
    if(top==-1)
    {
        printf("\nstack is underflow");
    }
    else
    {
        printf(" %d",stack[top]);
    }
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf(" %d",stack[i]);
    }
}

int main()
{
    //push();
   // pop();
    //peek();
    display();

    return 0;
}
