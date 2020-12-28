#include <stdio.h>
#include <conio.h>

int main()
{
label:
    printf("HOW ARE YOU\n");
    printf("we are at end\n");

    for (int i = 0; i < 10; i++)
    {
        int num;
        printf("thank you\n");
        for (int j = 0; j < 8; j++)
        {
            printf("Enter 0 to exit the program = ");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:

    return 0;
}
