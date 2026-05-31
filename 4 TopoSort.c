#include <stdio.h>

int graph[20][20], visited[20], stack[20];
int top = -1, n;

void DFS(int v)
{
    int i;

    visited[v] = 1;

    for(i = 0; i < n; i++)
    {
        if(graph[v][i] && !visited[i])
            DFS(i);
    }

    stack[++top] = v;
}

int main()
{
    int i, j;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    for(i = 0; i < n; i++)
        visited[i] = 0;

    for(i = 0; i < n; i++)
    {
        if(!visited[i])
            DFS(i);
    }

    printf("Topological Order:\n");

    while(top != -1)
        printf("%d ", stack[top--]);

    return 0;
}