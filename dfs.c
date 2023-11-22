#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

int graph[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];
int numVertices;

void dfs(int vertex) {
    visited[vertex] = true;
    printf("Visited vertex %d\n", vertex);

    for (int i = 0; i < numVertices; i++) {
        if (graph[vertex][i] && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    // Initialize the graph and visited array here
    numVertices = 4; // Adjust as needed

    for (int i = 0; i < numVertices; i++) {
        visited[i] = false;
        for (int j = 0; j < numVertices; j++) {
            graph[i][j] = 0;
        }
    }

    // Add edges to the graph as needed
    graph[0][1] = 1;
    graph[0][2] = 1;
    graph[1][0] = 1;
    graph[1][3] = 1;
    graph[2][0] = 1;
    graph[2][3] = 1;
    graph[3][1] = 1;
    graph[3][2] = 1;

    // Start DFS from vertex 0
    dfs(0);

    return 0;
}

