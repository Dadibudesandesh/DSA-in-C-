#include<stdio.h>

void printArray(int Arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",Arr[i]);
    }
}

 void mergeSort(int Arr[],int low,int high)
 {
     if(low<high)
     {

         int mid =(low+high)/2;
         mergeSort(Arr,low,mid);
         mergeSort(Arr,mid+1,high);
         merge(Arr,mid,low,high);
     }
 }


 void merge(int Arr[],int mid,int low,int high)
 {
     int i,j,k,B[50];
     i=low;
     j=mid+1;
     k=low;

     while(i<=mid && j<=high)
     {
         if(Arr[i]<Arr[j])
         {
             B[k]=Arr[i];
             i++;
             k++;
         }
         else
            {
            B[k]=Arr[j];
            j++;
            k++;
         }
     }
     while(i<=mid)
     {
         B[k]=Arr[i];
         i++;
         k++;
     }
     while(j<=high)
     {
         B[k]=Arr[j];
         j++;
         k++;
     }
     for(int i=low;i<=high;i++)
     {
         Arr[i]=B[i];
     }
 }

void main()
{
    int Arr[50],size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("\nEnter %d Elements : ",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&Arr[i]);
    }

    mergeSort(Arr,0,size-1);
    printArray(Arr,size);
}

