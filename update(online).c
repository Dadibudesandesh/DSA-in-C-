#include <stdio.h>
void main()
{
    int A[50],size,position,value ;
    int i, j;
    printf("Enter Size of array : ");
    scanf("%d",&size);
    printf("Enter %d Elements (0<50)  : ",size);
    for(i = 0; i<size; i++)
    {
      scanf("%d",&A[i]);
    }
    printf("Enter Position You want to update the element : ");
    scanf("%d",&position);
    printf("Enter value to the given position : ");
    scanf("%d",&value);
    printf("The array elements after Updation : ");
       A[position-1] = value;
     for(i = 0; i<size; i++)
    {
      printf("%d ",A[i]);
    }
    printf("\n\n\n\n\n");
    /*printf("The original array elements are :\n");
    for(i = 0; i<size; i++)
    {
        printf("A[%d] = %d \n", i, A[i]);
    }
    A[position-1] = value;
    printf("The array elements after Updation :\n");
    for(i = 0; i<size; i++)
    {
        printf("A[%d] = %d \n", i, A[i]);
    }*/
}
