#include <stdio.h>

int main()
{
    int n, i, key;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            return 0;
        }
    }

    printf("Element not found\n");
    return 0;
}