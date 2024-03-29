#include <stdlib.h>


/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

typedef struct binary_tree_s {
	int value;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL) {
		return NULL; // Return NULL directly whenever memory allocation fails
	}

	new_node->value = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return new_node;
}
