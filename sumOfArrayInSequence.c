#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the iteration ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        sum = sum + arr[i];
        arr[i + 1] = sum + arr[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}