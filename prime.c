#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, i = 2;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("not a prime");
    }

    while (i < n)
    {
        if (n % i == 0)
        {
            printf("not a prime no");
            break;
        }
        i++;
    }
    if (i == n)
    {
        printf("it is a prime no");
    }

    return 0;
}