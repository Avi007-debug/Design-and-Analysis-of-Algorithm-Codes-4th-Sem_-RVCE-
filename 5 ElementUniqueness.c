#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    /* Presorting (Bubble Sort) */
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    /* Check adjacent elements */
    for(i = 0; i < n - 1; i++)
    {
        if(A[i] == A[i + 1])
        {
            printf("Elements are NOT unique\n");
            return 0;
        }
    }

    printf("All elements are unique\n");

    return 0;
}