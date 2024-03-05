#include<stdio.h>
#define max 50

typedef struct
{
    int data[max];
    int top ;
} stack;



void staticStack(struct stack* s)
{
   int i;
   for(i=0;i < max;i++)
   {
       s->data[i]=-1;
       s->top= -1 ;
   }
}


int isfull(struct stack*s)
{
    if(s->top==max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty(stack*s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int push(struct stack*s,int no)
{
     (s->top)++;
     s->data[s->top]=no;
}


int pop(struct stack*s)
{
   int var;
   var=s->data[s->top];
   s->top--;
   return var;
}

int display(struct stack*s)
{
     int i;
     for(i=s->top;i>=0;i--)
     {
         printf(" %d",s->data[i]);
     }

}

int main()
{
    struct stack *s;
    //int sp=&s;
    int no,ch,input;
    staticStack(&s);
    s->data[0]=27;

        printf("1) PUSH \n 2) POP \n 3) DISPLAY \n 4) EXIT");
        printf("\n Enter Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 :
            printf("\n Enter a value you want to push  : ");
            scanf("%d",&no);
            if(!isfull(&s))
            {
                push(&s,no);
            }
            else
            {
                printf("Stack is full .....");
            }
            break;
        case 2 :
            if(!isempty(&s))
            {
                printf("POPed number is : %d ",pop(&s));
            }
            else
            {
                printf("Stack is empty....");
            }
            break;
        case 3 :
            if(isempty(&s))
            {
                printf("Stack is empty.....");
            }
            else
            {
                display(&s);
            }
            break;
        case 4 :
            break;
        default :
            printf("Enter correct choice !!!!!!!!");
            break;

        }

        printf("You Rerun the program then enter 1  you exit to program then enter any key : ");
        scanf("%d",&input);
        if(input==1)
        {
            main();
        }

return 0;

}
