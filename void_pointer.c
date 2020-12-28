//void pointer
//general purpose pointer
//can consist of any data type
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a = 456;
    float b = 355;
    void *ptr;
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    return 0;
}