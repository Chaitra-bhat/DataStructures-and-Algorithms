/******************************************************************************

1. Array Append

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct ARRAY{
    int size_array ;
    int *a;
};

void display(struct ARRAY arr)
{
    for(int i=0; i<arr.size_array; i++)
    {
        printf("Element %d = %d\n", i, arr.a[i]);
    }
}

void append_array(struct ARRAY arr, int x)
{
    //printf("%d", arr.size_array);
    arr.a[arr.size_array] = x;
    arr.size_array = arr.size_array + 1;
    display(arr);
}

int main()
{
    struct ARRAY arr;
    int append_value;
    printf("Enter the size of the array \n");
    scanf("%d", &arr.size_array);
    printf("Enter the elements\n");
    arr.a = (int*)malloc(arr.size_array*sizeof(int));
    for(int i=0; i<arr.size_array;i++)
    {
        scanf("%d", &arr.a[i]);
    }
    display(arr);
    printf("Enter the value to be appended\n");
    scanf("%d", &append_value);
    append_array(arr, append_value);
    
    

    return 0;
}
