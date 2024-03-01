#include <stdio.h>
#include "binary_tree.h"

int main(void) {
    binary_tree_t *root = binary_tree_node(NULL, 1);
    root->left = binary_tree_node(root, 2);
    root->right = binary_tree_node(root, 3);
    root->left->left = binary_tree_node(root->left, 4);
    root->left->right = binary_tree_node(root->left, 5);

    printf("Binary Tree:\n");
    binary_tree_print(root);

    return 0;
}

