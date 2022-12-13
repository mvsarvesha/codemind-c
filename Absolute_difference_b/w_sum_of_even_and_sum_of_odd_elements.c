#include <stdio.h>
#include<math.h>

#define MAX_SIZE 100  // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size, i, odd=0,even=0;

    /* Input size of array */
    
    scanf("%d", &size);

    /* Input elements of array */
    //printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0) { 
            even +=arr[i];
        }
        else {
            odd += arr[i];
        }
    }
    printf("%d",abs(odd-even));
    
}