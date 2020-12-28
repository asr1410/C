#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, aman;
//global declaration
//struct student harry, ravi, aman;

int main()
{
    harry.id = 1;
    ravi.id = 2;
    aman.id = 3;
    harry.marks = 157;
    ravi.marks = 100;
    aman.marks = 155;
    harry.fav_char = 'p';
    ravi.fav_char = 'o';
    aman.fav_char = 'p';
    strcpy(harry.name, "Harry Student Of The Year");
    printf("%s", harry.name);
    //print all the info of given student
    printf("Student details\n");
    printf("Student name HARRY\n");
    printf("id = %d\n", harry.id);
    printf("marks of harry = %d\n", harry.marks);
    printf("fav. char. of harry = %c\n", harry.fav_char);
    printf("Student name RAVI\n");
    printf("id = %d\n", ravi.id);
    printf("marks of harry = %d\n", ravi.marks);
    printf("fav. char. of harry =%c\n", ravi.fav_char);
    printf("Student name AMAN\n");
    printf("id = %d\n", aman.id);
    printf("marks of harry = %d\n", aman.marks);
    printf("fav. char. of harry = %c\n", aman.fav_char);

    return 0;
}