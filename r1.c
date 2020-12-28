#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int num, range;
    int *ptr;
    printf("Enter the number you want multipication\n");
    scanf("%d", &num);
    printf("enter the range you want multiple upto\n");
    scanf("%d", &range);
    int arr[range];
    ptr = arr;
    for (int i = 0; i < range; i++)
    {
        arr[i] = num * (i + 1);
    }
    for (int i = 0; i < range; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, arr[i]);
        printf("%d X %d = %d\n", num, i + 1, *(ptr + i));
    }
    printf("%d", sizeof(arr));
    printf("%d", sizeof(ptr));

    return 0;
}