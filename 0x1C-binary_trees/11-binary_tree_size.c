#include "binary_trees.h"

/**
 * binary_tree_size - find the size of binary tree
 * @tree: pointer to root node
 *
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_left, size_right;

	if (tree)
	{
		size_left = binary_tree_size(tree->left);
		size_right = binary_tree_size(tree->right);

		return (size_left + size_right + 1);
	}
	return (0);
}
