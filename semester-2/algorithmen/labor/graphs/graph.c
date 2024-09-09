#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>


typedef struct Vertex {
    int data;
} Vertex;

typedef struct Edge {
    Vertex *src;
    Vertex *dest;
    int weight;
} Edge;


typedef struct Graph {
    Vertex **vertices;
    Edge **edges;
} Graph;


int main()
{
    Graph *g = malloc(sizeof(Graph));



    return 0;
}

Edge * new_edge(Vertex *src, Vertex *dest, int weight)
{
    Edge *new = malloc(sizeof(Edge));
    new->src = src;
    new->dest = dest;
    new->weight = weight;

    return new;
}

Vertex * new_vertex(int data)
{
    Vertex *new = malloc(sizeof(Vertex));
    new->data = data;

    return new;
}