#include "binary_trees.h"
/**
 * binary_tree_delete - deletes entire binary tree
 * @tree: tree to be freed
 * Return: Free tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
