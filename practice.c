#include<stdio.h>
void main()
{

    int marks[5],i,total=0,per;

    printf("enter five subject marks : ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("\n Your five subject marks are :\n ");

    for(i=0; i<5; i++)
    {
        printf(" \t\n Subject %d : %d",i+1,marks[i]);
    }
    for(i=0; i<5; i++)
    {
        total = total+marks[i];
    }
    printf("\n\nTotal Marks : %d/500",total);
    printf("\tPercentage : %d",total/5);

    per=total/5;


    if(per>=80)
    {
        printf("\tGrade : A ");
    }
    else if(per < 80 && per >= 60)
    {
        printf("\tGrade : B ");
    }
    else if(per < 60 && per >= 35)
    {
        printf("\tGrade : C");
    }
    else{
        printf("\tResult : Fail");
    }
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
