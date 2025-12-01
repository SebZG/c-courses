#include<stdio.h>

#define V 4

void addEdge(int mat[V][V], int i, int j) {

    // Since the graph is undirected
    mat[i][j] = 1;
    mat[j][i] = 1;
}

void displayMatrix(int mat[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main() {
    int mat[V][V] = {0};

    addEdge(mat, 0, 1);
    addEdge(mat, 0, 2);
    addEdge(mat, 1, 2);
    addEdge(mat, 2, 3);

    printf("Adjacency Matrix Representation\n");
    displayMatrix(mat);

    return 0;
}

//     0  1  2  3
//   ┌────────────┐
// 0 │ 0  1  1  0 │  ← Node 0 connects to nodes 1 and 2
// 1 │ 1  0  1  0 │  ← Node 1 connects to nodes 0 and 2
// 2 │ 1  1  0  1 │  ← Node 2 connects to nodes 0, 1, and 3
// 3 │ 0  0  1  0 │  ← Node 3 connects to node 2
//   └────────────┘

// 1 = edge exists, 0 = no edge
