#include<stdio.h>
void printArray(int A[],int size)
{
    int i,j;
    for(  i=0;i<size;i++)
    {
        printf("%d ",A[i]);
    }
}

void Selection_Sort(int A[],int size)
{
    int temp,min,i,j;
    for( i=0;i<size;i++)
    {
        min=i;

        for( j=i+1;j<size;j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        //swap(A[i],A[min]);
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
}

int main()
{
    int A[]={12,34,65,32,11,23,55},size=sizeof(A)/sizeof(A[0]);
    printArray(A,size);
    Selection_Sort(A,size);
    printf("\n");
    printArray(A,size);
    return 0;
}
