#include<stdio.h>
#define max 5

typedef struct queue
{
    int data[max];
    int front,rear;
}INQUEUE;

void initq(INQUEUE *q)
{
    q->front=-1;
    q->rear=-1;
}

int isempty(INQUEUE *q)
{
    if(q->front==q->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}int isfull(INQUEUE *q)
{
    if(q->rear==max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void inQueue(INQUEUE *q,int val)
{
    q->rear++;
    q->data[q->rear]=val;
}
int deQueue(INQUEUE *q)
{

   int deletevalue = q->data[q->front+1];
    return deletevalue;

}

void main()

{
    INQUEUE q;
    int ch,no,i;
    initq(&q);
    do
    {
        printf("\n1) INSERT \n 2) DELETE \n 3) DISPLAY \n 4) EXIT ");
        printf("\nEnter a option you want to performing operation in queue : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : if(!isfull(&q))
                     {
                         printf("Enter number you want to insert in queue : ");
                         scanf("%d",&no);
                         inQueue(&q,no);
                     }
                     else
                     {
                         printf("Sorry...! Queue is full...");
                     }
                     break;
            case 2 : if(!isempty(&q))
                      {
                          no=deQueue(&q);
                          printf("Deleted data in queue is : %d",no);
                      }
                      else
                      {
                          printf("Sorry....! Queue is empty...");
                      }
                      break;
            case 3 : printf("Queue : ");
                     for(i=q.front;i<=q.rear;i++)
                     {
                         printf(" %d",q.data[i]);
                     }
                     break;
            case 4 : break;
        }
    }while(ch!=4);
}
