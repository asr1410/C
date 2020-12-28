#include<stdio.h>
int main()
{
    /*
        %c= char
        %d= integer
        %f= float
        %l= long
        %lf= double
        %Lf= long double
    */
    int a;
    int b;
    a = 1;
    b = 1;
    printf("a || b = %d\n", a||b);
    printf("a && b = %d\n", a&&b);
    printf("a == b = %d\n", a==b);
    printf("a != b = %d\n", a!=b);
    printf("!a = %d\n", !a);
    printf("!b = %d\n", !b);
    return 0;
}