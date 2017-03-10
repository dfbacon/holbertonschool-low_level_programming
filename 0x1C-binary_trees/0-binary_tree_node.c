#include "binary_trees.h"
/**
 * binary_tree_node - create a binary_tree_t node with no children
 * @parent: pointer to parent node of node to create
 * @value: value of new node
 *
 * Return: pointer to new node, or NULL if fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
