#include <stdio.h>

#define MAX_SIZE 100  // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, found,avg=0;

    /* Input size of array */
    //printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements of array */
    //printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        avg +=arr[i];
    }
    toSearch = avg/size;
    

    /* Assume that element does not exists in array */
    found = 0; 
    
    for(i=0; i<size; i++)
    {
        /* 
         * If element is found in array then raise found flag
         * and terminate from loop.
         */
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    /*
     * If element is not found in array
     */
    if(found == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}