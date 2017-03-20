#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a binary tree
 * @node: pointer to root node
 *
 * Return: height, or -1 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	if (node == NULL)
		return (0);
	for (depth = 0; node->parent; depth++, node = node->parent)
		;
	return (depth);
}
