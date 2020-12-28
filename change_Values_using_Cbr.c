#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a + *b;
    *b = *a - *b;
    *a = temp;
    return 0;
}
int main()
{
    int x = 11, y = 5;
    swap(&x, &y);
    printf("new values of X is %d and Y is %d\n", x, y);
    printf("value of x is %d\n", x);
    printf("value of y is %d\n", y);

    return 0;
}