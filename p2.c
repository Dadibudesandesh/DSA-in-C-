#include<stdio.h>
void main()
{

    int a[20],i,j,size,count;

    printf("Enter array size : ");
    scanf("%d",&size);
    printf("Enter %d Elements : ",size);
    for(i=0;i<size;i++)

    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++)
    {

        count++;
    }

    if(count>size)
    {
        printf("Check length of array !!!!!!");
    }

    else{
        for(i=0;i<size;i++)
        {
            for(j=0;j<size-i;j++)
            {
                if(a[j]>a[j+1])
                {

                    a[j+1]=a[j]+a[j+1];
                    a[j]=a[j+1]-a[j];
                    a[j+1]=a[j+1]-a[j];
                }
            }
        }

         printf("\nAfter Boubel Sort : ");
         for(i=0;i<size;i++)
    {

       printf(" %d",a[i]);
    }

    }



}
