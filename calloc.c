#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, *ptr, sum = 0;
    printf("Enter the no to enter = ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Error memory not allocated");
        exit(0);
    }
    printf("Enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("the sum is %d", sum);
    //Deallocation of ponter memory
    free(ptr);
    return 0;
}