#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
    int a, b;
    char c;
    printf("enter your name  first letter = ");
    scanf("%c", &c);
    printf("enter your age = ");
    scanf("%d", &a);
    printf("enter your year = ");
    scanf("%d", &b);

    switch (c)
    {
    case 'A':
        printf("student of our college\n");

        switch (a)
        {
        case 15:
            printf("computer science engineering\n");
            switch (b)
            {
            case 2:
                printf("contact no : 9810703844\n");
                break;
            default:
                printf("dont use other credentials\n");
                break;
            }
            break;
        default:
            printf("course not selected yet\n");
            break;
        }
    default:
        ("fill the registration form\n");
        break;
    }
    return 0;
}