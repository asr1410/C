#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void parser(char *string)
{
    int in = 0; //variable to check that we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            printf("i = %d index = %d in = %d \n", i, index, in);
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            printf("i = %d index = %d in = %d \n", i, index, in);
            continue;
        }
        else if (in == 0)
        {
            string[index] = string[i];
            printf("i = %d index = %d in = %d \n", i, index, in);
            index++;
        }
    }
    string[index] = '\0';
    //Remove the trailing spaces from the beginning
    while (string[0] == ' ')
    {
        //shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            printf("%d %d remove trail from begin\n", strlen(string), i);
            string[i] = string[i + 1];
        }
    }
    //Remove the trailing spaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        printf("%d remove trail from end\n", strlen(string));
        string[strlen(string) - 1] = '\0';
    }
}
int main()
{
    char string[] = "<h1>    this is a heading    </h1>";
    printf("%d\n", strlen(string));
    printf("%c\n", string[4]);
    parser(string);
    printf("the pasred string is ~~%s~~", string);
    return 0;
}
/*
Input:
this is a heading

Output:
this is a heading
*/
