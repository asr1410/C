#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int b = 34; // this is a global variable as its defined outsde main
int ret()
{
    return 43 * 3;
}
int func1(int b1)
{
    static int myvar = 93; //valye change inside the function
    printf("the value of my var is %d \n", myvar);
    myvar++;
    // int log = 45; //local variable
    // printf("the address of b inside func 1 is %d\n ", &b);
    // printf("the address of b inside func 1 is %d\n ", b);
    // return b1 * 10;
    return b1 + myvar;
}
int main()
{
    int b = 344;
    // printf("the address of b inside main is %d\n ", &b);
    // printf("the address of b inside main is %d\n ", b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("the value of func 1 is %d\n ", val);
    // printf("the value of func 1 is %d ", ptr);
    return 0;
}