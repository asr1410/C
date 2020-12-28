#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, output1 = 0, output2 = 0;
    scanf("%d", &a); //no of test cases
    for (g = 0; g < a; g++)
    {
        scanf("%d%d%d", &b, &c, &d); //takinginputof costofgreen and purpleballon and noofparticipants
        for (h = 0; h < d; h++)
        {
            scanf("%d%d", &e, &f);                   //input of 1st problem , 2nd problem
            output1 = output1 + ((e * b) + (f * c)); //total price by 1st operation
            output2 = output2 + ((e * c) + (f * b)); //total price by 2nd operation
        }
        if (output1 < output2) //finding minimum of 2 operations
        {
            printf("%d\n", output1);
        }
        else
        {
            printf("%d\n", output2);
        }
        output1 = 0;
        output2 = 0;
    }
    return 0;
}