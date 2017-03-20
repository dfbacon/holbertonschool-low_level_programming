#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a child node to right of parent node
 * if parent node has right-child, move it to right-child of new node
 * @parent: pointer to parent node
 * @value: value of new node
 *
 * Return: pointer to new node, or NULL if fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		(new_node->right)->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
