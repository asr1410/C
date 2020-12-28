//WILD POINTER
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a = 334;
    int *ptr; //THIS IS WILD POINTER
    //*ptr = 34; // THIS IS NOT A GOOD THING TO DO
    ptr = &a; //PTR IS NO LONGER A WILD PoINTER
    printf("the vslue of a is %d", *ptr);
    return 0;
}