#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}

int greet()
{
    printf("Hello");
}
int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2)); //testing the function

    int (*fptr)(int, int);
    fptr = &sum;           //create a function pointer
    int d = (*fptr)(4, 6); //dereference a function pointer
    printf("the value of d is %d", d);
    return 0;
}