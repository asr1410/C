#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;
std function, variable, character;
struct student varchar;
int main()
{
    //int *a, b;
    typedef int *intPointer;
    intPointer a, b;
    int c = 89;
    a = &c;
    b = &c;
    // function.id = 1;
    // function.marks = 25;
    // function.fav_char = 'p';
    // strcpy(function.name, "Abhishek");
    // varchar.id = 2;
    // printf("id = %d\n", function.id);
    // printf("name = %s\n", function.name);
    // printf("fav char = %c\n", function.fav_char);
    // printf("marks = %d\n", function.marks);
    // printf("id = %d\n", varchar.id);

    // typedef <previous_name> <alias_name>
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1, l2, l3;
    // integer a = 4;
    // printf("%d",a);

    return 0;
}