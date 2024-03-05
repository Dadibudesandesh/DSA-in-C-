#include<stdio.h>
//#include<stdlib.h>

void printArray(int Arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf(" %d",Arr[i]);
    }
    printf("\n");
}

void bubbleSort(int Arr[],int size){
   int i,j;
   for(i=0;i<=size-1;i++)
   {
       for(j=0;j<=size-1-i;j++)
       {
           if(Arr[j]>Arr[j+1])
           {
               Arr[j]=Arr[j]^Arr[j+1];
               Arr[j+1]=Arr[j]^Arr[j+1];
               Arr[j]=Arr[j]^Arr[j+1];
           }
       }
   }
}


void main()
{
    int Arr[]={1,4,2,3,5,6};
    int size=sizeof(Arr)/sizeof(Arr[0]);
    printf("Before bubbleSort Array : ");
    printArray(Arr,size);
    bubbleSort(Arr,size);
    printf("After bubbleSort Array : ");
    printArray(Arr,size);

}
