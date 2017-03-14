#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a given node is a leaf
 * @node: node being evaluated
 *
 * Return: 1 if node is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right)
		return (0);
	return (1);
}

/**
 * binary_tree_nodes - count nodes that have at least 1 child node
 * @tree: pointer to root
 *
 * Return: number of nodes with at least 1 child node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree && binary_tree_is_leaf(tree) == 0)
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	return (0);
}
