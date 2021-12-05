/******************************************************************************

1. Array Delete

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

void delete_value_array(struct ARRAY arr, int index)
{
    int x = 0;
    x = arr.a[index];
    for(int i=index; i<arr.size_array -1; i++)
    {
        arr.a[i] = arr.a[i+1];
    }
    arr.size_array = arr.size_array - 1;
    display(arr);
}

int main()
{
    struct ARRAY arr;
    int delete_value;
    printf("Enter the size of the array \n");
    scanf("%d", &arr.size_array);
    printf("Enter the elements\n");
    arr.a = (int*)malloc(arr.size_array*sizeof(int));
    for(int i=0; i<arr.size_array;i++)
    {
        scanf("%d", &arr.a[i]);
    }
    display(arr);
    
    printf("Enter the index from where the value is to be deleted\n");
    scanf("%d", &delete_value);

    delete_value_array(arr, delete_value);
    return 0;
}
