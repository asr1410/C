#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
union student
{
    int id;
    int marks;
    char name[30];
} harry;
struct teacher
{
    int id;
    int age;
    char name[30];
} aman;

int main()
{
    harry.id = 5;
    strcpy(harry.name, "Harry Potter");
     harry.marks = 50;
    aman.id = 2;
    strcpy(aman.name, "Aman Deep");
    aman.age = 55;
    printf("id = %d\n", harry.id);
    printf("name = %s\n", harry.name);
    printf("marks = %d\n", harry.marks);
    printf("id = %d\n", aman.id);
    printf("name = %s\n", aman.name);
    printf("age = %d\n", aman.age);

    return 0;
}