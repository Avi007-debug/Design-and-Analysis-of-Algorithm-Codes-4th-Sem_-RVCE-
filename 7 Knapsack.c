#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int n, W, i, w;

    printf("Enter number of items: ");
    scanf("%d", &n);

    int wt[n + 1], val[n + 1];

    printf("Enter weights:\n");
    for(i = 1; i <= n; i++)
        scanf("%d", &wt[i]);

    printf("Enter profits:\n");
    for(i = 1; i <= n; i++)
        scanf("%d", &val[i]);

    printf("Enter capacity: ");
    scanf("%d", &W);

    int K[n + 1][W + 1];

    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if(i == 0 || w == 0)
                K[i][w] = 0;

            else if(wt[i] <= w)
                K[i][w] = max(val[i] + K[i - 1][w - wt[i]],
                              K[i - 1][w]);

            else
                K[i][w] = K[i - 1][w];
        }
    }

    printf("Maximum Profit = %d\n", K[n][W]);

    return 0;
}