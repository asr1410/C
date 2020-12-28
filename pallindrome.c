#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int isPallindrome(int n)
{
    int a = n;
    int rev = 0;
    int rem = 0;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    if (a == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter a number and check it is Pallindrome or not\n");
    scanf("%d", &n);
    if (isPallindrome(n))
    {
        printf("This is pallindrome");
    }
    else
    {
        printf("It is not pallindrome");
    }

    return 0;
}