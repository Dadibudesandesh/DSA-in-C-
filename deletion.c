#include<stdio.h>
void main()
{
    int a[50],pos,size,value,i;
    printf("Enter size : ");
    scanf("%d",&size);
    printf("Enter %d element : ",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter position : ");
    scanf("%d",&pos);
    int DeletedValue=a[pos-1];
    deletion(a,pos,size);
    size--;
    print(a,size,DeletedValue);
}
void  deletion(int a[],int pos,int size)
{
    for( int i=pos-1; i<size; i++)
    {
        a[i]=a[i+1];
    }
}
void  print(int a[],int size,int DeletedValue)
{

    printf("\nResult ==> ");

    for(int i=0; i<size; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\nYour Deleted Value is : %d\n",DeletedValue);
}
