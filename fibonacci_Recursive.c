#include <stdio.h>
#include <conio.h>

int Fibonacci(int);

int main()
{
    while (1)
    {
        //FIBONACCI USING RECURSIVE APRROCH
        int a, i = 0, d;
        printf("Enter wanted number:");
        scanf("%d", &a);

        printf("Fibonacci series\n");

        for (d = 1; d < a; d++)
        {
            //printf("%d\n", Fibonacci(i)); //# can used to print every iteration
            Fibonacci(i);
            i++;
        }
        printf("%d\n", Fibonacci(i));
    }

    return 0;
}

int Fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}
