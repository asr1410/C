#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a = 5, age;
    char name[20];
    printf("enter the number : ");
    for (i = 1; i < 5; i++)
    {
        printf("%d X %d = %d", a, i, a * i);
        printf("\n");
        printf("enter the age : ");
        scanf("%d", &age);
        if (age > 10)
        {
            continue;
            break;
        }
        printf("tell me your name\n");
        scanf("%s", &name);
    }
    return 0;
}
