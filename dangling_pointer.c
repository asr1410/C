//DANGLING POINTER
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int *functionDanfling()
{
    int a, b, sum;
    a = 34;
    b = 344;
    sum = a + b;
    return &sum;
}
int main()
{
    // CASE 1  DEALLOCATION OF MEMORY BLOCK
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 39;
    ptr[2] = 64;
    ptr[3] = 94;
    free(ptr); //PTR IS NOW A DANGLING POINTER

    //CASE 2 FUNCTION RETURNING LOCAL VARIABLE ADDRESS
    int *dangPtr = functionDanfling(); //PTR IS NOW A DANGLING POINTER
    int *danglingPtr3;
    //IF THE VARIABLE GO OUT OF SCOPE
    {
        int a = 12;
        danglingPtr3 = &a;
    }
    //HERE VARIABLE GOES OUT OF SCOPE HENCE DANGLING POINTER IS POINTING TO LOCATION WHICH IS FREED NOW

    return 0;
}