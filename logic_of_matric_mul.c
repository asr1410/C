#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d, e = 1;
    printf("enter the values\n");
    printf("value of a = ");
    scanf("%d", &a);
    printf("value of b = ");
    scanf("%d", &b);
    printf("value of c = ");
    scanf("%d", &c);
    printf("value of d = ");
    scanf("%d", &d);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            for (int k = 0; k < b; k++)
            {
                printf("value of a = %d, d = %d, b = c = %d, no of iteration = %d\n", i, j, k, e);
                e++;
            }
        }
    }

    return 0;
}