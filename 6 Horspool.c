#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], pattern[100];
    int shift[256];
    int m, n, i, j, k;

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter pattern: ");
    scanf("%s", pattern);

    n = strlen(text);
    m = strlen(pattern);

    for(i = 0; i < 256; i++)
        shift[i] = m;

    for(i = 0; i < m - 1; i++)
        shift[(unsigned char)pattern[i]] = m - 1 - i;

    i = m - 1;

    while(i < n)
    {
        k = 0;

        while(k < m && pattern[m - 1 - k] == text[i - k])
            k++;

        if(k == m)
        {
            printf("Pattern found at position %d\n", i - m + 1);
            return 0;
        }

        i = i + shift[(unsigned char)text[i]];
    }

    printf("Pattern not found\n");

    return 0;
}