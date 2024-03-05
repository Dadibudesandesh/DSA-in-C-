#include<stdio.h>
void printArray(int Arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d",Arr[i]);
    }
}

updatation(int Arr[],int size,int position,int value)
{
        Arr[position-1]=value;
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
    printArray(Arr,size);
    updatation(Arr,size,position,value);
    printf("\n");
     printArray(Arr,size);
}
