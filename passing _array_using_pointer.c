#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int func1(int *ptr)
// Address of array is passed from main function using pointer
{
    for (int i = 0; i < 7; i++)
    {
        printf("the value at %d id %d\n", i, *(ptr + i)); //ptr[i]
    }
    *(ptr + 2) = 132; // if we change value in local func it affect main
    return 0;
}
int main()
{
    int arr[] = {45, 65, 8, 9, 87, 89, 85};
    printf("the value of array at index 0 id %d\n", arr[0]);
    int avg = func1(arr);
    //printf("%d\n", avg);
    func1(arr);

    return 0;
}