#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

void truncate();
Node *new_node(int data);
Node *rotate_left(Node *root);
Node *rotate_right(Node *root);
void write_tree_to_file(Node *root, char *message);
void write_tree_recursive(Node *node, FILE *file);

int main()
{
    Node *tree = new_node(3);
    tree->left = new_node(2);
    tree->right = new_node(5);
    tree->right->left = new_node(4);
    tree->right->right = new_node(6);

    truncate();
    write_tree_to_file(tree, "initial");
    tree = rotate_left(tree);
    write_tree_to_file(tree, "rotated left");
    tree = rotate_right(tree);
    write_tree_to_file(tree, "rotated right");

    return 0;
}

Node *new_node(int data)
{
    Node *new = malloc(sizeof(Node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;

    return new;
}

Node *rotate_right(Node *root)
{
    Node *pivot = root->left;
    Node *temp = pivot->right;
    pivot->right = root;
    root->left = temp;

    return pivot;
}

Node *rotate_left(Node *root)
{
    Node *pivot = root->right;
    Node *temp = pivot->left;

    pivot->left = root;
    root->right = temp;

    return pivot;
}

// very beautiful solution
// I'm very proud of myself for that
void truncate()
{
    FILE *file = fopen("tree.md", "w");
    fclose(file);
}

void write_tree_to_file(Node *root, char *message)
{
    FILE *file = fopen("tree.md", "a");
    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return;
    }

    fprintf(file, "%s\n", message);
    fprintf(file, "```mermaid\n");
    fprintf(file, "graph TD\n");
    write_tree_recursive(root, file);
    fprintf(file, "```\n");
    fprintf(file, "---\n");

    fclose(file);
}

void write_tree_recursive(Node *node, FILE *file)
{
    if (node == NULL)
    {
        return;
    }

    fprintf(file, "  %d\n", node->data);

    if (node->left != NULL)
    {
        fprintf(file, "  %d --> %d\n", node->data, node->left->data);
        write_tree_recursive(node->left, file);
    }

    if (node->right != NULL)
    {
        fprintf(file, "  %d --> %d\n", node->data, node->right->data);
        write_tree_recursive(node->right, file);
    }
}
