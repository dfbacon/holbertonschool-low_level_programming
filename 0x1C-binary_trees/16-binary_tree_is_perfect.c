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
 * binary_tree_nodes - count nodes of a binary tree
 * @tree: pointer to root
 *
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
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
	int height, nodes, check, i;

	if (tree)
	{
		height = binary_tree_height(tree);
		nodes = binary_tree_nodes(tree);

		check = 1;
		for (i = 0; i <= height; i++) /* find perfect # nodes */
			check *= 2;
		check -= 1;

		if (check == nodes)
			return (1);
	}
	return (0);
}
