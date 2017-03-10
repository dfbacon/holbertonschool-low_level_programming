#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert child node to left of parent node
 * if parent has left child move it to left of new child
 * @parent: pointer to parent node
 * @value: value of child node
 *
 * Return: pointer to child node, or NULL if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left)
	{
		new_node->left = parent->left;
		(new_node->left)->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
