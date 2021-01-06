#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void add(int a, int b)
{
    printf("add is %d\n", a + b);
}
int main()
{
    void (*ptr)(int, int);
    ptr = add;
    printf("%d\n", add);
    printf("%d\n", &add);
    printf("%d\n", *add);
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", &ptr);
    (ptr)(5, 10);
    return 0;
}