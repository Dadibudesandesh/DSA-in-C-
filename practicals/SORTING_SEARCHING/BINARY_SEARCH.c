#include<stdio.h>
void PrintArray(int Arr[],int size)
{
    printf("Arr[] : ");
    for(int i=0;i<size;i++)
    {
    printf("%d ",Arr[i]);

    }
}
void BinarySearch(int Arr[],int value,int low , int high)
{
    int mid;

    if(low>high)
    {
       printf("\nData Not Found");
    }
    else
    {
        mid=(low+high)/2;

        if(value==Arr[mid])
        {
            printf("\n Value found %d position  : %d",mid+1,Arr[mid]);
        }
        else if(value>Arr[mid])
        {
            BinarySearch(Arr,value,mid+1,high);
        }
        else
        {
            BinarySearch(Arr,value,low,mid-1);
        }
    }
}

void main()
{
    int Arr[]={2,5,7,9,22,44,55,66,88,99},size=sizeof(Arr)/sizeof(Arr[0]),value=55;
    PrintArray(Arr,size);
    BinarySearch(Arr,value,0,size-1);
}
