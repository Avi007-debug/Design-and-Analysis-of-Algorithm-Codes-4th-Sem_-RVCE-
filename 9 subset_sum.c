#include <stdio.h>

int w[20];
int x[20];
int n;
int target;

void SumOfSub(int s, int k, int r)
{
    x[k] = 1;

    if(s + w[k] == target)
    {
        printf("{ ");

        for(int i = 0; i <= k; i++)
        {
            if(x[i])
                printf("%d ", w[i]);
        }

        printf("}\n");
    }
    else if(s + w[k] + w[k + 1] <= target)
    {
        SumOfSub(s + w[k],
                 k + 1,
                 r - w[k]);
    }

    if((s + r - w[k] >= target) &&
       (s + w[k + 1] <= target))
    {
        x[k] = 0;

        SumOfSub(s,
                 k + 1,
                 r - w[k]);
    }
}

int main()
{
    int total = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in ascending order:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &w[i]);
        total += w[i];
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    SumOfSub(0, 0, total);

    return 0;
}