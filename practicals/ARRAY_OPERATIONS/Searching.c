#include<stdio.h>
void printArray(int Arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d",Arr[i]);
    }
}
void searching(int Arr[],int size,int position)
{
    for(int i=0;i<size;i++)
    {
        if(Arr[i] == position-1)
        {
        printf("Arr[%d] = %d",i,Arr[i]);
        }
    }
}

void main()
{
    int Arr[100],size,position;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("\nEnter %d Elements : ",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("Enter Position : ");
    scanf("%d",&position);
    printArray(Arr,size);
    searching(Arr,size,position);

}
