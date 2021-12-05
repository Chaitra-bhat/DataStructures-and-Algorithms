/******************************************************************************

1. Array Display

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct ARRAY{
    int size_array ;
    int *a;
};

void display(struct ARRAY arr)
{
    for(int i=0; i< arr.size_array; i++)
    {
        printf("Element %d = %d\n", i, arr.a[i]);
    }
}

int main()
{
    struct ARRAY arr; 
    printf("Enter the size of the array \n");
    scanf("%d", &arr.size_array);
    printf("Enter the elements\n");
    arr.a = (int*)malloc(arr.size_array*sizeof(int));
    for(int i=0; i<arr.size_array;i++)
    {
        scanf("%d", &arr.a[i]);
    }
    display(arr);
    

    return 0;
}
