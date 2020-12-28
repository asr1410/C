#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int first[10][10], second[10][10], result[10][10], a, b, c, d, sum;
    printf("----MATRIX MULTIPLICATION----\n");
    //SIZE OF MATRIX Ist
    printf("****Enter the size of 1st matrix****\n");
    printf("Rows in matrix 1st :- ");
    scanf("%d", &a);
    printf("column in matrix 1st :- ");
    scanf("%d", &b);

    //ENTER THE VALUES OF MATRIX Ist
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Value for A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }

    //SIZE OF MATRIX IInd
    printf("****Enter the size of 2nd matrix****\n");
    printf("Rows in matrix 2nd :- ");
    scanf("%d", &c);

    //CONDITION FOR MATRIX MULTIPLICATION
    if (b == c)
    {
        printf("column in matrix 2nd :- ");
        scanf("%d", &d);
        //ENTER THE VALUES OF MATRIX IInd
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("Value for B[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &second[i][j]);
            }
        }

        //LOOP ITERATION FOR GETTING RESULT MATRIX
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                sum = 0;
                for (int k = 0; k < b; k++)
                {
                    sum += first[i][k] * second[k][j];
                }
                result[i][j] = sum;
            }
        }

        //PRINT MATRIX Ist
        printf("FIRST MATRIX IS :\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d ", first[i][j]);
            }
            printf("\n");
        }

        //PRINT MATRIX IInd
        printf("SECOND MATRIX IS :\n");
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("%d ", second[i][j]);
            }
            printf("\n");
        }

        //PRINT RESULT MATRIX
        printf("RESULT MATRIX IS :\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("** ROW OF 2nd MATRIX IS MUST BE EQUAL TO COLUMN OF 1st MATRIX **");
    }
}