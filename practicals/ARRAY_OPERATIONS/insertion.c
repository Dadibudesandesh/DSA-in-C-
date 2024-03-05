#include<stdio.h>

void printArray(int Arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d",Arr[i]);
    }
}

void insertion(int Arr[],int value, int position, int size)
{
    if(position>size || position<0)
    {
        printf("Check size and position .......");
    }
    else
    {
        for(int i=size-1; i>=position-1; i--)
        {
            Arr[i+1]=Arr[i];
        }
        Arr[position-1]=value;
    }
}

void main()
{

    int Arr[100],size,position,value;

    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("\nEnter %d Elements : ",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("Enter Position : ");
    scanf("%d",&position);
    printf("Enter Value :  ");
    scanf("%d",&value);
    printf("Before Insert value Array : ");
    printArray(Arr,size);
    insertion(Arr,value,position,size);
    printf("\n");
    size++;
    printf("After Insert value Array : ");

    printArray(Arr,size);
}
