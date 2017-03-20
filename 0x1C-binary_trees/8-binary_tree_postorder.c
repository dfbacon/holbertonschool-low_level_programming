#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree using postorder method
 * @tree: pointer to root node
 * @func: pointer to function call for each node
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);
		if (tree->right)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
