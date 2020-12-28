#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str1[10];
    char str2[10];
    char str3[40];
    printf("enter the name of 1st friend = ");
    gets(str1);
    printf("enter the name of 2nd friend = ");
    gets(str2);
    printf("%s is a friend of %s", str1, str2);

    return 0;
}