#include <stdio.h>
#include <stdbool.h>
#define V 10 
void printSolution(int path[], int n) {
	int i;
    printf("Hamiltonian Circuit:\n");
    for (i = 0; i < n; i++)
        printf("%d ", path[i]);
    printf("%d\n", path[0]);
}
bool isSafe(int v, bool graph[V][V], int path[], int pos, int n) {
	int i;
    if (!graph[path[pos - 1]][v])
        return false;
    for ( i = 0; i < pos; i++)
        if (path[i] == v)
            return false;
    return true;
}
bool hamiltonianUtil(bool graph[V][V], int path[], int pos, int n) {
    if (pos == n) {
        if (graph[path[pos - 1]][path[0]])
            return true;
        else
            return false;
    }
    int v;
    for ( v = 1; v < n; v++) {
        if (isSafe(v, graph, path, pos, n)) {
            path[pos] = v;

            if (hamiltonianUtil(graph, path, pos + 1, n))
                return true;

            path[pos] = -1; 
        }
    }
    return false;
}
bool hamiltonianCycle(bool graph[V][V], int n) {
    int path[V],i;
    for (i = 0; i < V; i++)
        path[i] = -1;
    path[0] = 0;
    if (!hamiltonianUtil(graph, path, 1, n)) {
        printf("No Hamiltonian Circuit exists.\n");
        return false;
    }
    printSolution(path, n);
    return true;
}
int main() {
    int n,i,j;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    bool graph[V][V];
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    hamiltonianCycle(graph, n);
    return 0;
}
