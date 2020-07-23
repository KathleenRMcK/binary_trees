#include "binary_trees.h"
/**
 * binary_tree_height - measures height of binary tree
 * @tree: tree to measure
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_help = 0;
	size_t right_help = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_help = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			right_help = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((left_help > right_help) ? left_help : right_help);
	}
}
