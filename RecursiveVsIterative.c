#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int fib_Iterative(int n)
{
    int a = 0, b = 1;
    for (int i = 1; i < n; i++)
    {
        b = b + a;
        a = b - a;
    }
    return a;
}
int fib_Recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_Recursive(n - 1) + fib_Recursive(n - 2);
    }
}
int main()
{
    int n;
    printf("find the Nth no of fibonacci starting from 1 = ");
    scanf("%d", &n);
    printf("The value of %dth term in fibonacci series using iterative starts from 1 is %d\n", n, fib_Iterative(n));
    printf("The value of %dth term in fibonacci series using recursive starts from 1 is %d\n", n, fib_Recursive(n));
    return 0;
}