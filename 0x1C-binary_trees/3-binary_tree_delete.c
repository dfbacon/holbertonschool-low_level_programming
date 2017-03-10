#include "binary_trees.h"

/**
 * binary_tree_delete - delete a binary_tree_t binary tree
 * @tree: pointer to root of tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL)
		return;
	while (tree)
	{
		temp = tree;
		tree = tree->next; /* not next, have to check right and left */
		free(temp->n);
		free(temp);
	}
}
