#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree using preorder method
 * @tree: pointer to binary_tree_t root node
 * @func: pointer to a function call for each node
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree)
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
