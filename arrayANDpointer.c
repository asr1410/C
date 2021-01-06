#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {13, 25, 36, 47, 58, 65, 7};
    int *arrptr = arr; //
    printf("Value at postion 1 of the array is %d\n", arr[1]);

    printf("The address of first element of the array %d\n", &arr[0]);
    printf("The address of first element of the array %d\n", arr + 0);
    printf("The address of first element of the array %d\n", arrptr);
    printf("The address of second element of the array %d\n", &arr[1]);
    printf("The address of second element of the array %d\n", arr + 1);
    printf("The address of second element of the array %d\n", arrptr + 1);

    printf("The value at address of first element of the array %d\n", *(&arr[0]));
    printf("The value at address of first element of the array %d\n", *(arr));
    printf("The value at address of first element of the array %d\n", arr[0]);
    printf("The value at address of first element of the array %d\n", *arrptr);
    printf("The value at address of first element of the array %d\n", *(arrptr + 1));
    printf("The value at address of second element of the array %d\n", *(&arr[1]));
    printf("The value at address of second element of the array %d\n", *(arr + 1));
    printf("The value at address of second element of the array %d\n", arr[1]);
    return 0;
}