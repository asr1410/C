#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int add(int a, int b)
{
    // here a and b are formal parameter
    int c = 20;
    // c is a local variable for this function
    return a + b;
}
int main()
{
    int x = 10, y = 20;
    // x and y are actual parameters
    int z = add(x, y);
        printf("sum of %d and %d is %d", x, y, z);
    return 0;
}