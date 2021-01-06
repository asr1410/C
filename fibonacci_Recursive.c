#include <stdio.h>
#include <conio.h>

int Fibonacci(int);

int main()
{

    //FIBONACCI USING RECURSIVE APRROCH
    int a, i = 0, d;
    printf("Enter wanted number:");
    scanf("%d", &a);

    printf("Fibonacci series\n");

    for (i = 1; i < a + 1; i++)
    {
        //printf("%d\n", Fibonacci(i)); //# can used to print every iteration
        d = Fibonacci(i);
    }
    printf("%d\n", d);

    return 0;
}

int Fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}
