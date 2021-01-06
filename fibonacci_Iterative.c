#include <stdio.h>
#include <stdlib.h>

int main()
{
    // FIBONACCCI USING ITERATIVE APPROCH
    int n, first = 0, second = 1, i;
    printf("Enter the Nth term to find fibonacci value = ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = 1; i < n + 1; i++)
        {
            if (i < 3)
            {
                second = i - 1;
            }
            else
            {
                second = first + second;
                first = second - first;
            }
            //printf("%d\n", second);
        }
        printf("fibonacci value of %dth term is %d\n", n, second);
    }
    else
    {
        printf("Enter a positive term\n");
    }

    return 0;
}
