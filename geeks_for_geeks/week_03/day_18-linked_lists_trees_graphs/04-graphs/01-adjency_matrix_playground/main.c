#include <stdio.h>

#define V 4

void addEdge(int mat[V][V], int i, int j)
{
    mat[i][j] = 1;
    mat[j][i] = 1;
}

void displayMatrix(int mat[V][V])
{
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int isConnected(int mat[V][V], int i, int j)
{
    return mat[i][j] == 1;
}

void printNeighbors(int mat[V][V], int node)
{
    printf("Neighbors of node %d: ", node);
    for (int i = 0; i < V; i++)
    {
        if (mat[node][i] == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int getDegree(int mat[V][V], int node)
{
    int count = 0;
    for (int i = 0; i < V; i++)
    {
        if (mat[node][i] == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int mat[V][V] = {0};

    // Build the graph
    addEdge(mat, 0, 1);
    addEdge(mat, 0, 2);
    addEdge(mat, 1, 2);
    addEdge(mat, 2, 3);

    displayMatrix(mat);

    // Use the graph
    printf("\nIs node 0 connected to node 3? %s\n", isConnected(mat, 0, 3) ? "Yes" : "No");

    printNeighbors(mat, 2);

    printf("Node 2 has %d connections\n", getDegree(mat, 2));

    return 0;
}
