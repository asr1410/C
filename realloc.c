#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr, n1, n2;
    printf("Enter the size = ");
    scanf("%d", &n1);
    ptr = (int *)malloc(n1 * sizeof(int));
    printf("Address of perivous allocated memory");
    for (int i = 0; i < n1; i++)
    {
        printf("%u\n", ptr + i);
    }
    printf("\nEnter the new size = ");
    scanf("%d", &n2);

    //Realloction of memory
    ptr = realloc(ptr, n2 * sizeof(int));
    printf("Address of the new allocated memory");
    for (int i = 0; i < n2; i++)
    {
        printf("%u\n", ptr + i);
    }

    //Deallocation of memory
    free(ptr);
    return 0;
}