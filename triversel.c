#include<stdio.h>
void main()
{

    int arr[100],i,size,pos,value;
    char reply;


    printf("Enter size of array (Between 0 to 100): ");
    scanf("%d",&size);
    if(size<0||size>100)
    {        printf("\n  read message again ...!!!!!!!! \n\n\n");


        main();
    }
    else
    {

        printf("\n Enter %d elements ==>> ",size);

        for(i=0;i<size;i++)
        {

            scanf("%d",&arr[i]);

        }

        printf("\n Given numbers are ==>>");

        for(i=0;i<size;i++)
        {

            printf(" %d",arr[i]);
        }


    }


}
