#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

//Swap with the help of pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    printf("******Enter the number to swap*****\n");
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);
    swap(&num1, &num2);
    printf("value of first number is %d and value of second number is %d", num1, num2);
    return 0;
}