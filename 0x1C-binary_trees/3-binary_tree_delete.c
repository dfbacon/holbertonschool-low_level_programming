#include "binary_trees.h"

/**
 * binary_tree_delete - delete a binary_tree_t binary tree
 * @tree: pointer to root of tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
