#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int sum = 99;
int num()
{
    static int a = 5; //static variable store old data
    a++;
    return a;
}
int ans(int a, int b)
{
    // auto int sum;
    extern int sum; //use global variable
    // sum = a + b;
    return sum;
}

int main()
{
    //Delaration = Telling the compiler about the variable
    //Defination = Declaration + space reservation
    int sum = ans(5, 4);
    printf("the sum is %d\n", sum);

    // STATIC VARIABLE FUNCTION
    register int a = 9;
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", num());
    }
    return 0;
}