#include <stdio.h>

int main()
{
    int n, i, j, k;

    scanf("%d", &n);

    int A[n][n], B[n][n], C[n][n];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            C[i][j] = 0;

            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("Result Matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", C[i][j]);

        printf("\n");
    }

    return 0;
}
/*
#include <stdio.h>

int main()
{
    int m, n, p, q;
    int i, j, k;

    // Input dimensions of first matrix
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d%d", &m, &n);

    // Input dimensions of second matrix
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d%d", &p, &q);

    // Matrix multiplication condition:
    // Number of columns of A must be equal to
    // Number of rows of B
    if(n != p)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Multiplication
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            C[i][j] = 0;

            // Common dimension loop
            for(k = 0; k < n; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/