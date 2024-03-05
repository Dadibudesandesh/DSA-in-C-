#include<stdio.h>
int i;
void printArray(int Arr[],int size)
{
    for(i=0;i<size;i++)
    {

        printf(" %d",Arr[i]);
    }
}

void Deletion(int Arr[],int size , int position)
{

    if(position>size||position<0)
    {
        printf("Enter valid position......");
    }
    else{
        for(i=position-1;i<size-1;i++)
        {

            Arr[i]=Arr[i+1];
        }

    }
}

void main()
{

    int Arr[]={5,6,9,8,3,2},position=2,size=sizeof(Arr)/sizeof(Arr[0]);
    printArray(Arr,size);
    Deletion(Arr,size,position);
    size--;
    printf("\n");
    printArray(Arr,size);

}
