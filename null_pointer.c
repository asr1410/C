//Null Pointer
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // int x = 10;
    // int *p = NULL; //store no variable in the data type nobody can derefernce it
    // p = &x;        //pointer hold the address of x
    int a = 34;
    int *ptr; // = &a; //NULL;
    if (ptr != NULL)
    {
        printf("the address of a is %d", *ptr);
    }
    else
    {
        printf("the pointer is a null pointer cannot be derreferenced");
    }

    return 0;
}