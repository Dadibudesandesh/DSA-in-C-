#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
}*head;

void create_node(int value)
{
      struct node * temp;
      temp=head;
      temp->data=value;
      temp->next=NULL;
}

void display()
{
    struct node *temp;
    temp=head;
    printf("Elements are : ");
    while(temp->next!=NULL)
    {
        printf(" %d ",temp->data);
    }
}

int main()
{

    create_node(43);
    display();

    return 0;
}
