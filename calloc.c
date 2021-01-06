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
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d. ", i + 1);
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("the sum is %d\n", sum);
    //Deallocation of ponter memory
    printf("%d\n", sizeof(ptr));
    free(ptr);
    printf("%d\n", sizeof(ptr));
    return 0;
}