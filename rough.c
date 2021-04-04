#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

int minimumChanges(int N, int *V)
{
    long count = 0;
    for (long i = 1; i < N; i++)
    {
        if (V[i - 1] > V[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t_i = 0; t_i < T; t_i++)
    {
        int N;
        scanf("%d", &N);
        int i_V;
        int *V = (int *)malloc(sizeof(int) * (N));
        for (i_V = 0; i_V < N; i_V++)
            scanf("%d", &V[i_V]);

        int out_ = minimumChanges(N, V);
        printf("%d", out_);
        printf("\n");
    }
}