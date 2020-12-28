#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("enter the size of pattern = ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            //printf("%d ", j + 1);
            printf("* ");
        }
        printf("\n");
    }
    int k = a - 1;
    for (k; k > 0; k--)
    {
        for (int l = 0; l < k; l++)
        {
            printf("* ");
            //printf("%d ",l+1);
        }
        printf("\n");
    }

    return 0;
}
