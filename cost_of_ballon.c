/*
Problem

You are conducting a contest at your college. This contest consists of two problems and n participants. You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

Use green-colored balloons for the first problem and purple-colored balloons for the second problem
Use purple-colored balloons for the first problem and green-colored balloons for the second problem
You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.

Input format

First line:  that denotes the number of test cases (1<=T<=10)
For each test case:
First line: Cost of green and purple-colored balloons
Second line:  that denotes the number of participants (1<=N<=10)
Next  lines: Contain the status of users. For example, if the value of the jth  integer in the ith row is 0, then it depicts that the ith participant has not solved the jth  problem. Similarly, if the value of the  integer in the  row is 1 , then it depicts that the participant has solved the  problem.

Output format

For each test case, print the minimum cost that you have to pay to purchase balloons.

Sample Input

2
9 6
10
1 1
1 1
0 1
0 0
0 1
0 0
0 1
0 1
1 1
0 0
1 9
10
0 1
0 0
0 0
0 1
1 0
0 1
0 1
0 0
0 1
0 0

Sample Output

69

14

*/
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