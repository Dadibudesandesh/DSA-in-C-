#include<stdio.h>

void  PrintArray(int a[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf(" %d",a[i]);
    }
}

void Merge(int a[],int mid ,int low,int high)
{
    int i,k,j,B[50];
    i=low;
    j=mid+1;
    k=low;

    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            B[k]=a[i];
            i++;
            k++;
        }
    }

    while(i<=mid)
    {

        B[k]=a[i];
        k++;
        i++;
    }
    while(j<=high)
    {

        B[k]=a[j];
        k++;
        j++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=B[i];    }
}

void MergeSort(int a[],int low ,int high)
{
    int mid;
    if(low<high)
    {

        mid=(low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge(a,mid,low,high);

    }
}
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
    PrintArray(a,size);
    MergeSort(a,0,size-1);
    PrintArray(a,size);
}
