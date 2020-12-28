//calculate sum of n number
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, *ptr, sum = 0;
    printf("Enter the no of elements = ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("size of ptr %d\n", sizeof(ptr));
    // if memory cannot be allocated
    if (ptr == NULL)
    {
        printf("Error! memory not allocated");
        exit(0);
    }

    printf("Enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("sum = %d", sum);

    printf("size of ptr is %d \n", sizeof(ptr));

    //deallocate the memory
    free(ptr);
    printf("size of ptr is %d ", sizeof(ptr));

    return 0;
}