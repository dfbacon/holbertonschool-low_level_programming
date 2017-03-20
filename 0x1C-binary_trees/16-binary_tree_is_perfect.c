#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to root node
 *
 * Return: 1 if full, 0 if not full or NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->right == NULL && tree->left == NULL)
			return (1);
		if (tree->right && tree->left)
			return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
	}
	return (0);
}

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to root
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	static int value;

	if (tree)
	{
		value = binary_tree_is_full(tree);
		if (value == 1)
			return (1);
		else
			return (0);
	}
	return (0);
}
