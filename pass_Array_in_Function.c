#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int func1(int array[])
// Address of array is passed from main function
{
    for (int i = 0; i < 7; i++)
    {
        printf("the value at %d id %d\n", i, array[i]);
    }
    // array[0] = 132; // if we change value in local func it affect main
    return 0;
}
int main()
{
    int arr[] = {45, 65, 8, 9, 87, 89, 85};
    printf("the value of array at index 0 id %d\n", arr[0]);
    int avg = func1(arr);
    // Address of array is passed
    printf("the value of array at index 0 id %d\n", arr[0]);

    return 0;
}