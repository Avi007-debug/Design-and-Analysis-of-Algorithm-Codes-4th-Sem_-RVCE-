#include <stdio.h>
#include <stdlib.h>

int x[20];
int n;

int Place(int k, int i)
{
    int j;

    for(j = 1; j < k; j++)
    {
        if(x[j] == i ||
           abs(x[j] - i) == abs(j - k))
            return 0;
    }

    return 1;
}

void NQueens(int k)
{
    int i;

    for(i = 1; i <= n; i++)
    {
        if(Place(k, i))
        {
            x[k] = i;

            if(k == n)
            {
                for(int j = 1; j <= n; j++)
                    printf("%d ", x[j]);

                printf("\n");
            }
            else
            {
                NQueens(k + 1);
            }
        }
    }
}

int main()
{
    printf("Enter number of queens: ");
    scanf("%d", &n);

    NQueens(1);

    return 0;
}