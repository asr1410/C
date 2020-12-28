#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a;
    // printf("Value of a ");
    // scanf("%d", &a);
    printf("file name is %s\n", __FILE__);
    printf("todat date is %s\n", __DATE__);
    printf("time now is %s\n", __TIME__);
    printf("Line no is %d\n", __LINE__);
    printf("ANSI : %d", __STDC__);

    return 0;
}