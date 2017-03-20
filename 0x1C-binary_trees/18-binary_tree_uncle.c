#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a given node
 * @node: given node
 *
 * Return: pointer to sibling node of @node, or NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL)
		return (NULL);

	if (node->parent->right && node->parent->left)
	{
		if (node->parent->right != node)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - find the "uncle" node to a given node
 * @node: given node
 *
 * Return: pointer to "uncle" node, or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
