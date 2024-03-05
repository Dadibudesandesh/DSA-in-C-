#include<stdio.h>
void main()
{
    int a[50],pos,size,value,i,count;
    char ch;
    printf("Enter size : ");
    scanf("%d",&size);
    printf("Enter %d element : ",size);
    for(i=0;i<size;i++)
    {

        scanf("%d",&a[i]);
    }
     for(i=0;i<size;i++)
    {
        count++;
    }


    printf("\nEnter position : ");
        scanf("%d",&pos);
        printf("\nEnter value : ");
        scanf("%d",&value);

        for( i=size-1;i>=pos-1;i--)
        {

            a[i+1]=a[i];
        }
                    a[pos-1]=value;


        printf("\nResult ==> ");

        for(i=0;i<=size;i++)
        {

            printf(" %d" ,a[i]);
        }


}
