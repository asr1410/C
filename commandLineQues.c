#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    /*
    you have to create a command line utility to add/subtract/divide/multiply two numbers
    first command line argument of your c program must be new operation.
    The next argument being the two numbers for eg.
    >>command.c add 45 4
    >>48 
    */

    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    printf("the operation is %s\n", operation);
    printf("Num1 is %d\n", num1);
    printf("Num2 is %d\n", num2);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }

    return 0;
}