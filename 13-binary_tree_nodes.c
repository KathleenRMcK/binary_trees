#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 * @tree: pointer to root node
 * Return: 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		count += ((tree->left || tree->right) ? 1 : 0);
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
		return (count);
	}
}
