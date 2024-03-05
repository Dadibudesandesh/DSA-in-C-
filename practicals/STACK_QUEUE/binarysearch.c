#include<stdio.h>

void printArray(int Arr[],int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        printf(" %d",Arr[i]);
    }
    printf("\n");
    printf("Data : 6");
}

void binarySearch(int Arr[],int low,int high,int data)

{
    int mid ;

    if(low>high)
    {
        printf("\nData Not Found");
    }
    else
    {
        mid =(low+high)/2;

        if(data==Arr[mid])
        {
            printf("Data found %d at position ",mid+1);
        }
        else if(data>Arr[mid])
        {
            binarySearch(Arr,mid+1,high,data);
        }
        else
        {
            binarySearch(Arr,low,mid-1,data);

        }
    }
}
void main()
{
    int Arr[]= {1,4,2,3,5,6};
    int size=sizeof(Arr)/sizeof(Arr[0]);
    printArray(Arr,size);
    binarySearch(Arr,0,size-1,6);
}
