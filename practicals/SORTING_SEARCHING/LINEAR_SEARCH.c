#include<stdio.h>

void LinearSearch(int Arr[],int size,int value)
{
     int p,v;
    for(int i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            p=i;
            v=Arr[i];
        }

    }

    if(v==value)
    {
        printf("\nArr[%d]  : %d",p+1,v);
    }
    else
    {
        printf("\n%d value doesn't exist in array.......  ",value);
    }
     printf("\n\n\n\n\n\n\n");
}

void main()
{
    int Arr[]={1,5,4,3,2,6,7,9,8},size=sizeof(Arr)/sizeof(Arr[0]),value=10;
    printf("value   : %d\n",value);
    printf("Array[] : ");
    for(int i=0;i<size;i++)
    {
        printf(" %d",Arr[i]);
    }

    LinearSearch(Arr,size,value);
}
