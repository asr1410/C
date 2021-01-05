#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    printf("The value of arg c is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has value of %s \n", i, argv[i]);
    }

    return 0;
}
