#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a binary tree using inorder method
 * @tree: pointer to root node
 * @func: pointer to function call for each node
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		if (tree->left)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right)
			binary_tree_inorder(tree->right, func);
	}
}
