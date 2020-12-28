#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Employee 1\nEnter the no of char. of Emp ID = ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter emp id\n");
    //scanf("%d", &ptr);
    for (int i = 0; i < n; i++)
    {
        printf("Enter character %d = ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The Entered Emp ID is = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }
    printf("\nSize of ptr is %d", sizeof(ptr));

    //EMPLOYEE 2
    printf("\nEmployee 2\nEnter the no of char. of Emp ID = ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    printf("Enter emp id\n");
    //scanf("%d", &ptr);
    for (int i = 0; i < n; i++)
    {
        printf("Enter character %d = ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The Entered Emp ID is = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }
    printf("\nSize of ptr is %d", sizeof(ptr));

    //EMPLOYEE 3
    printf("\nEmployee 3\nEnter the no of char. of Emp ID = ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    printf("Enter emp id\n");
    //scanf("%d", &ptr);
    for (int i = 0; i < n; i++)
    {
        printf("Enter character %d = ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The Entered Emp ID is = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }
    printf("\nSize of ptr is %d", sizeof(ptr));

    //FREE THE DATA STORE IN PTR
    free(ptr);
    printf("\nSize of ptr is %d", sizeof(ptr));
    printf("\nvalue in ptr on index 3 is %d", ptr[2]);

    return 0;
}