#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    int i = 1;
    scanf("%d", &n);
    // printf("%c", i == n - 1 ? '\n' : ' ');
    if (i == n - 1)
    {
        printf("\n");
        printf("hello");
    }
    else
    {
        printf(" ");
        printf("hello");
    }
}