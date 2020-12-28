#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("myfile.txt", "r"); //READ MODE

    // ptr = fopen("myfile.txt", "w"); //WRITE MODE

    //ptr = fopen("myfile.txt", "r+"); //READ WRITE MODE

    //ptr = fopen("myfile.txt", "w+"); // WRITE PLUS MODE

    ptr = fopen("myfile.txt", "a+"); // APPEND PLUS

    //FGETC WORKING read a character
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c);

    //FGETS WORKING read a strinf with declare size
    // char str[20];
    // fgets(str, 5, ptr);
    // printf("the string is %s", str);

    //FPUTC WORKING write a character
    fputc('o', ptr);

    //FUPTS WORKING write a string
    fputs("this is me", ptr);

    fclose(ptr);

    return 0;
}