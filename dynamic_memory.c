#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h> // calloc malloc

int main()
{
    //use of malloc
    //FEATURE AS GARBAGE VALUE VALUE PRINTED FOR NON DEFINED CONSTRAINTS
    int *ptr;
    int n;
    printf("Enter the size of array in malloc you want to create\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no % d of this array = ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at % d of this array is %d \n", i, ptr[i]);
    }

    //free(ptr);

    // use of calloc
    // TAKE THE NON ALLOCATED CONSTRAINT AS 0
    // int *ptr;
    // int n;
    printf("Enter the size of array in calloc you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no % d of this array = ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at % d of this array is %d \n", i, ptr[i]);
    }

    //free(ptr);

    //use of realloc

    // printf("Enter the size of new array you want to create\n");
    // scanf("%d", &n);
    // ptr = (int *)realloc(ptr, n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the new value no % d of this array = ", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("the value at % d of this array is %d \n", i, ptr[i]);
    // }

    // free(ptr);

    return 0;
}