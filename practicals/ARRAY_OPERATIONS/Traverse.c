#include<stdio.h>


void main()
{
int Arr[100],size;

    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("\nEnter %d Elements : ",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&Arr[i]);
    }
    traverse(Arr,size);

}

void traverse(int Arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d",Arr[i]);
    }
}
