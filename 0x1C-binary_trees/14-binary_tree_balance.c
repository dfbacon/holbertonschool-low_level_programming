#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to root node
 *
 * Return: height, or -1 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_right, height_left;

	if (tree && (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree)
	{
		height_left = binary_tree_height(tree->left);
		height_right = binary_tree_height(tree->right);

		if (height_left > height_right)
			return (height_left + 1);
		else
			return (height_right + 1);
	}
	return (-1);
}

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to root node
 *
 * Return: balance factor, or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	static int left, right;

	if (tree)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		return (left - right);
	}
	return (0);
}
