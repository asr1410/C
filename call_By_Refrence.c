#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// CALL BY REFERENCE WITH HELP OF POINTERS
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int main()
{
    int x, y;
    printf("enter the values of x = ");
    scanf("%d", &x);
    printf("enter the value of y = ");
    scanf("%d", &y);
    swap(&x, &y);
    //SEND THE ADDRESS OF THE VARIABLE TO THE FUNCTION
    printf("value of x is %d and y is %d\n", x, y);
    printf("x is %d\n", x);
    printf("y is %d\n", y);

    return 0;
}