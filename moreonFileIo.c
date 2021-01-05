#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("myfile.txt", "r");//for read
    // ptr = fopen("myfile.txt", "w"); //for write
    // ptr = fopen("myfile.txt", "r+"); //for read and write
    // ptr = fopen("myfile.txt", "w+"); //for truncate berfore  write
    ptr = fopen("myfile.txt", "a+"); //for append
    // char c = fgetc(ptr);
    // printf("the character i read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character i read was %c\n", c);

    // char str[4];
    // fgets(str, 8, ptr);
    // printf("The string is %s \n", str);

    fputc('O', ptr);
    fputs(" This is abhishek", ptr);
    fclose(ptr);
    return 0;
}