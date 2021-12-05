/******************************************************************************

1. Array Search

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

int search(struct ARRAY arr, int search_val)
{
    int i = 0;
    while(i<arr.size_array)
    {
        if(search_val == arr.a[i])
        {
            printf("Key found at %d", i);
            return 1;
        }
        i++;    
    }
    return 0;
}

int main()
{
    struct ARRAY arr;
    int key;
    printf("Enter the size of the array \n");
    scanf("%d", &arr.size_array);
    printf("Enter the elements\n");
    arr.a = (int*)malloc(arr.size_array*sizeof(int));
    for(int i=0; i<arr.size_array;i++)
    {
        scanf("%d", &arr.a[i]);
    }
    display(arr);
    
    printf("Enter the key to searched\n");
    scanf("%d", &key);
    
    if(search(arr, key) ==  0)
    {
        printf("Key not found\n");
    }
    return 0;
}
