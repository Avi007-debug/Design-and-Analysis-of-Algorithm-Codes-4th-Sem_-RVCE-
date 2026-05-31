#include <stdio.h>

int linearSearch(int a[], int n, int key)
{
    if(n == 0)
        return -1;

    if(a[n - 1] == key)
        return n - 1;

    return linearSearch(a, n - 1, key);
}

int main()
{
    int n, key, i;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    printf("%d", linearSearch(a, n, key));

    return 0;
}