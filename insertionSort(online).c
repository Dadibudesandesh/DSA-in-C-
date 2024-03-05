#include<stdio.h>
void insertionSort( int A[],int Position,int value,int size )
{
      /* select value to be inserted */
     //  int  valueToInsert = value;
    // int holePosition = Position;
   /*locate hole position for the element to be inserted */
for (int i = Position ; i<=size-1 ;i++ )
{
       // 0 1 2 3 4 5 6 7 8
      // 6 5 4 3 2 1
       for( int i=size-1;i>=Position-1;i--)
        {

            A[i+1]=A[i];
        }
                    A[Position-1]=value;

  }
      size++;
}
void main()
{

    int A[50],Position,value,size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter %d Elements : ",size);
    for(int i =0;i<size;i++)
    {

        scanf("%d",&A[i]);
    }
     printf("Enter a position : ");
    scanf("%d",&Position);
    printf("Enter value you want to insert : ");
    scanf("%d",&value);
    insertionSort(A,Position,value,size);
     for(int i =0;i<size;i++)
    {

        printf("%d ",A[i]);
    }
}
