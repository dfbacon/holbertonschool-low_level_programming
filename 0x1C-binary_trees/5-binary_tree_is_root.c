#include "binary_trees.h"

/**
 * binary_tree_is_root - check if given node is root
 * @node: node being examined
 *
 * Return: 1 if root; 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);
	return (1);
}
