#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a binary tree
 * @node: pointer to root node
 *
 * Return: height, or -1 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth;

	if (node)
	{
		depth = binary_tree_depth(node->parent);
		return (depth + 1);

	}
	return (-1);
}
