#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{

    //For rock paper scissor return 1 if c1 > c2 and 0 otherwise.If c1 == c2 return -1
    if ((char1 == char2))
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}
int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock, Paper, Scissors.\n");
    for (int i = 0; i < 3; i++)
    {

        //TAKE PLAYER INPUT
        printf("player 1's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        scanf("%d", &temp);
        playerChar = dict[temp - 1];
        printf("You Choose %c\n\n", playerChar);

        //GENERATE COMPUTER INPUT
        printf("Computer's Turn:");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("Comp Choose %c\n\n", compChar);

        //COMPARE THE SCORES
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("CPU GOT IT\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("IT'S A DRAW\n");
        }
        else
        {
            playerScore += 1;
            printf("YOU GOT IT\n");
        }
        printf("YOU : %d\nCOMP: %d\n\n", playerScore, compScore);
    }
    if (playerScore > compScore)
    {
        printf("YOU WIN");
    }
    else if (compScore > playerScore)
    {
        printf("COMP WIN");
    }
    else
    {
        printf("MATCH IS DRAW");
    }

    return 0;
}