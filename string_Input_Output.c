#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    //STRING DECLARATION
    //char str[] = {'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', '\0'};
    //char str[10] = "function";
    char str[100];
    //Scanf for the string
    gets(str);
    //print string using declare function
    printf("using printstr function = ");
    printstr(str);
    printf("\n");
    //using printf to get string
    printf("using printf function = %s\n", str);
    //print string using puts
    printf("using puts function = ");
    puts(str);
    //printstr(str);

    return 0;
}