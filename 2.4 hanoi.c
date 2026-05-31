#include <stdio.h>

void TOH(int n, char source, char aux, char dest)
{
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, dest);
        return;
    }

    TOH(n - 1, source, dest, aux);

    printf("Move disk %d from %c to %c\n", n, source, dest);

    TOH(n - 1, aux, source, dest);
}

int main()
{
    int n;

    scanf("%d", &n);

    TOH(n, 'A', 'B', 'C');

    return 0;
}