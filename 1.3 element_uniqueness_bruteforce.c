#include <stdio.h>

int main()
{
    int n, i, j, unique = 1;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                unique = 0;
                break;
            }
        }
    }

    if(unique)
        printf("All elements are distinct\n");
    else
        printf("Elements are not distinct\n");

    return 0;
}