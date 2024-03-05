#include<stdio.h>

void printArray(int Arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d",Arr[i]);
    }
}

void SoringArray(int Arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(Arr[i]>Arr[i+1])
        {
            swap(Arr[i],Arr[i+1]);
        }

    }
}

void main()
{

    int Arr[]={4,7,5,9,2,8,3,1},size=sizeof(Arr)/sizeof(Arr[0]);
    SortArray(Arr,size);
    printArray(Arr,size);
}
