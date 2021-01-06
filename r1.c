#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char string[] = "<h1>    this is a heading    </h1>";
    printf("%d", strlen(string));
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        else if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    printf("%s\n", string);
    string[index] = '\0';
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
    printf("%s\n", string);

    return 0;
}