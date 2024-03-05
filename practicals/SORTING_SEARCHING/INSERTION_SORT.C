#include<stdio.h>
int i,j,temp;

void printArr(int Arr[],int size)
{
    for(i=0;i<size;i++)
    {
        printf("%d ",Arr[i]);
    }

}
void insertionSort(int Arr[], int size)
{
        for(i=0;i<size;i++)
    {
        temp=Arr[i];
        j=i-1;

        while(j>=0 && Arr[j]>temp)
        {
            Arr[j+1]=Arr[j];
            j--;
        }
        Arr[j+1]=temp;
    }

}

int main()
{
    int Arr[]={23,4,55,67,89,55},size=sizeof(Arr)/sizeof(Arr[0]);
    printArr(Arr,size);
    insertionSort(Arr,size);
    printf("\n");
    printArr(Arr,size);




    return 0;

}
/*
for(i=1;i<size;i++)
{
    temp=Arr[i];
    for(j=i-1;j>=0 && Arr[j]>temp;j--)
    {
        Arr[j+1]=Arr[j];
    }
    Arr[j+1]=temp;
}
return 0;
}*/
