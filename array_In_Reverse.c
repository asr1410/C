#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

// int array_revv(int b, int array[])
// {
//     int temp;
//     for(int i = 0; i < b/2; i++)
//     {
//         temp = array[i];
//         array[i]=array[b-1-i];
//         array[b-1-i]=temp;
//     }
//     for (int i = 0; i < b; i++)
//     {
//         printf("%d ",array[i]);
//     }

//     return 0;
// }
int array_input(int b, int array[])
{
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &array[i]);
    }
    return 0;
}
int array_output(int b, int array[])
{
    printf("array values in original ordrer = ");
    for (int i = 0; i < b; i++)
    {
        printf(" %d", array[i]);
        if (i == b - 1)
        {
            break;
        }
        else
        {
            printf(",");
        }
    }
    printf("\n");
    return 0;
}
int array_rev(int b, int array[])
{
    printf("array values in reverse order = ");
    for (int i = b - 1; i >= 0; i--)
    {
        printf(" %d", array[i]);
        if (i == 0)
        {
            break;
        }
        else
        {
            printf(",");
        }
    }
    printf("\n");
    return 0;
}
int main()
{
    int a;
    printf("Size of array = ");
    scanf("%d", &a);
    int arr[a];
    array_input(a, arr);
    array_output(a, arr);
    array_rev(a, arr);
    //array_revv(a, arr);
    array_output(a, arr);

    return 0;
}