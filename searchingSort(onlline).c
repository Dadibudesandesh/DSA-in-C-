void selectionSort()
{
list  :
    array of items
n     :
    size of list

    for (i = 1 ; i< n - 1; i++)
    {


        /* set current element as minimum*/
        min = i;

        /* check the element to be minimum */

        for (j = i+1 ; j<size; j++)
        {


            if (list[j] < list[min])
            {
                min = j;

            }
        }
        /* swap the minimum element with the current element*/
        if (indexMin != i  )
        {
            swap (list[min], list[i]);

        }
    }
}
