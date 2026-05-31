#include <stdio.h>

#define INF 9999

int main()
{
    int n, i, j, u, v, count;
    int cost[20][20];
    int dist[20];
    int visited[20];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);

            if(cost[i][j] == 0 && i != j)
                cost[i][j] = INF;
        }
    }

    int source;

    printf("Enter source vertex: ");
    scanf("%d", &source);

    for(i = 0; i < n; i++)
    {
        dist[i] = cost[source][i];
        visited[i] = 0;
    }

    visited[source] = 1;
    dist[source] = 0;

    count = 1;

    while(count < n)
    {
        int min = INF;

        for(i = 0; i < n; i++)
        {
            if(!visited[i] && dist[i] < min)
            {
                min = dist[i];
                u = i;
            }
        }

        visited[u] = 1;

        for(v = 0; v < n; v++)
        {
            if(!visited[v] &&
               dist[u] + cost[u][v] < dist[v])
            {
                dist[v] = dist[u] + cost[u][v];
            }
        }

        count++;
    }

    printf("Shortest distances:\n");

    for(i = 0; i < n; i++)
        printf("%d -> %d = %d\n",
               source, i, dist[i]);

    return 0;
}