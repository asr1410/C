#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int func1(int arr[3][3])
// Address of array is passed from main function using pointer
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("the value at %d, %d is %d\n", i, j, arr[i][j]); //ptr[i]
        }
    }
    arr[1][1] = 132; // if we change value in local func it affect main
    return 0;
}
int main()
{
    int arr[3][3] = {{45, 65}, {48, 75}, {5, 10}};
    printf("the value of array at index 0,0 is %d\n", arr[0][0]);
    func1(arr);
    //printf("%d\n", avg);
    func1(arr);
    printf("the value at index 1,1 is %d", arr[1][1]);

    return 0;
}