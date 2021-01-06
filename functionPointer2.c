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
void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("hello user\n");
    printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    {
        printf("Good morning user user\n");
        printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
    }
}
int main()
{
    int (*ptr)(int, int);
    ptr = &sum;
    greetGmAndExecute(*ptr);
    greetHelloAndExecute(*ptr);
    return 0;
}